## 构建环境

操作系统：Windows 11

编译环境：WSL2 + [debian11](https://learn.microsoft.com/en-us/windows/wsl/install-manual#downloading-distributions)

### 构建额外信息

占用空间100G左右，建议磁盘拥有200G的空间。

## CMake

https://github.com/Kitware/CMake/releases?page=9

## binutil-gdb
```shell
apt install -y libmpc-dev texinfo bison flex
```

## llvm-project
```shell
apt install -y ninja-build python3
```

## boto配置
```shell
export NO_AUTH_BOTO_CONFIG="/home/msojocs/.boto"
```
.boto内容
```
[Boto]
debug = 0
num_retries = 10

proxy = 127.0.0.1
proxy_port = 7890
```

## nwjs
```shell
./build/install-build-deps.sh
sudo apt install xz-utils python curl libcups2-dev libglib2.0-dev \
libnss3-dev \
libxkbcommon-dev \
libdrm-dev \
libgbm-dev \
libpango1.0-dev \
libdbus-1-dev \
gperf \
libx11-xcb-dev \
libkrb5-dev
```

修改：`nwjs/src/build/config/linux/libffi/BUILD.gn`:
```
config("libffi") {
  #libs = [ ":libffi_pic.a" ] # 注释掉
  libs = [ "ffi" ] # 新增一行
}
```

## ninja -C out/Release node

```shell
sudo apt-get install gcc-multilib g++-multilib
```