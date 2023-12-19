# 备忘

## cpu内部信号端口
- 通过Vcpu.h查看cpu基本信息
- 通过Vcpu\_\_\_024root.h查看内部端口和变量信息

- 通过verilated_types.h和verilated.h查看类型信息
 - IData类型
 - AlUnpacked模板类


## sdb与cpu之间的时延
- sdb中输出指令的时机是在cpu执行指令之后的
- 即cpu先执行指令后，sdb才会输出指令内容
- 因此，有时会发现执行指令的内容出现在sdb内容的上面，这是正常的
