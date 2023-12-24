#!/bin/bash

echo "gen with llvm: $llvm_dir"
./buildtools/linux64/gn gen out/nw --args='clang_use_chrome_plugins=false enable_swiftshader=false angle_enable_swiftshader=false enable_swiftshader_vulkan=false dawn_use_swiftshader=false treat_warnings_as_errors=false dcheck_always_on=false use_gold=false use_lld=false clang_base_path="'$llvm_dir'" is_debug=false is_component_build=false is_component_ffmpeg=true target_cpu="loong64" use_sysroot=false use_gnome_keyring=false'