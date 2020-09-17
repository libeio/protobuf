
## 测试版本
- 当前安装及测试版本 `3.13.0`

## 安装步骤
- 生成配置文件
  ```shell
    ./autogen.sh
  ```
- 进行配置
  ```shell
    ./configure --prefix=/usr/local/protobuf
  ```
- 编译安装
  ```shell
    make
    make install
  ```

## 利用 protoc 命令创建 .cpp 文件
- 安装完成后，在 `/usr/local/protobuf/bin` 下会有产生一个可执行命令 `protoc`。将该命令添加软链接到系统执行路径:
  ```shell
	ln -s /usr/local/protobuf/bin/protoc /usr/bin/protoc
  ```
- 创建关于 `.proto` 文件的 `.h` 和 `.cc` 文件
  ```shell
	protoc --cpp_out=. addressbook.proto
  ```
  如果 `addressbook.proto` 内部还依赖其他文件，可以通过 `-I` 或 `--proto_path` 指定依赖文件所在的最深层目录。

## protobuf 基本用法
- [protobuf最基本示例](Usage.md)

## 测试目录说明




