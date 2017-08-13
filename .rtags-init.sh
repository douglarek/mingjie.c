#!/bin/sh

if test -f .dir-locals.el; then

    echo ".dir-locals.el already exists, bailing out ..." >&2
    exit 1

else

    rm -rf build && mkdir -p build && cd build && cmake .. && cd ..
    cat >.dir-locals.el <<EOF
((nil . ((cmake-ide-build-dir . "$(pwd)/build"))))
EOF
fi
