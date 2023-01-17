#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/lxf/lxf_work/learning_mpac/mpac_control/src/mpac/mpac_teleop"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/lxf/lxf_work/learning_mpac/mpac_control/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/lxf/lxf_work/learning_mpac/mpac_control/install/lib/python2.7/dist-packages:/home/lxf/lxf_work/learning_mpac/mpac_control/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/lxf/lxf_work/learning_mpac/mpac_control/build" \
    "/usr/bin/python2" \
    "/home/lxf/lxf_work/learning_mpac/mpac_control/src/mpac/mpac_teleop/setup.py" \
     \
    build --build-base "/home/lxf/lxf_work/learning_mpac/mpac_control/build/mpac/mpac_teleop" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/lxf/lxf_work/learning_mpac/mpac_control/install" --install-scripts="/home/lxf/lxf_work/learning_mpac/mpac_control/install/bin"
