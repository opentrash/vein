# vein
game engine written in cpp

### before
1. prepare cpplint  

```
pip install cpplint
```

2. init the githooks first by the command:

``` 
# project root folder
# after init the githooks, cpplint will run eveny time you commit
make init
```

## test
Please install [google-test](https://github.com/google/googletest) first.  

#### Macos
You can install it by your own or install it with a simple [script](https://github.com/liyechen/gtest-installer)(only for mac).  

#### Linux

```
# make sure cmake have been installed, different systems have different ways to install
sudo apt install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo make install
```

You can now test the corresponding module in each subfolder.  
For example:  
in core/math  

```sh  
# in test/math
# this will test all submodules in core/math
make test

# in test/math
# this will test vector2 in core/math
make test_vector2
```
