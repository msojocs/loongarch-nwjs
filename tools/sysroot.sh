#!/bin/bash
set -e

root_dir=$(cd `dirname $0`/.. && pwd -P)
success() {
  echo -e "\033[42;37m 成功 \033[0m $1"
}
notice() {
  echo -e "\033[36m $1 \033[0m "
}
fail() {
  echo -e "\033[41;37m 失败 \033[0m $1"
}

sysroot_name="clfs-loongarch64-system-8.1-sysroot.squashfs"
# 下载
if [ ! -f "$root_dir/$sysroot_name" ];then
  wget https://github.com/loongson/build-tools/releases/download/2023.08.08/clfs-loongarch64-system-8.1-sysroot.squashfs
fi
# 解压
if [ -z "$(ls -A $root_dir/sysroot)" ];then
  unsquashfs -d sysroot -no-xattrs clfs-loongarch64-system-8.1-sysroot.squashfs usr/include usr/lib usr/lib64 usr/share lib lib64
fi