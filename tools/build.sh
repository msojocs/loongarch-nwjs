#!/bin/bash
set -e

root_dir=$(cd `dirname $0`/.. && pwd -P)

cd "$root_dir/nwjs/src"
./buildtools/linux64/gn gen out/nw --args='clang_use_chrome_plugins=false treat_warnings_as_errors=false dcheck_always_on=false use_gold=false use_lld=false clang_base_path="/opt/loongarch64/llvm-18" is_debug=false is_component_build=false is_component_ffmpeg=true target_cpu="loong64" use_sysroot=false'
PYTHONPATH=${PWD}/third_party/node-nw/tools/v8_gypfiles GYP_CHROMIUM_NO_ACTION=0 GYP_CROSSCOMPILE=1 ./build/gyp_chromium -I third_party/node-nw/common.gypi -D building_nw=1 -D clang=1 -D target_arch=loong64 -D clang_base_dir="/opt/loongarch64/llvm-18" third_party/node-nw/node.gyp --no-duplicate-basename-check