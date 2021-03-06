Marlin_main.cpp: 整个工程的主函数所在
Marlin.h：整个工程头文件的一个转接点
//Ultralcd.h：整个工程中液晶屏相关的函数
//Ultralcd.cpp：整个工程中液晶屏相关函数具体实现
Planner.h：打印机移动部分的函数，关键算法结构体，消息队列
Planner.cpp：打印机移动部分的关键代码以及算法实现
Stepper.h：跟步进电机驱动子系统相关的所有函数的声明
Stepper.cpp：步进电机相关所有函数功能的实现
temperature.h:通过PID来控制加热头和热床温度
temperature.cpp：PID的具体实现，以及各种温度控制
motion_control.h：用来处理运动命令的高级接口的声明
motion_control.cpp：用来处理运动命令的高级接口的具体实现
//watchdog.h:看门狗初始化以及重置
//watchdog.cpp：看门狗初始化和重置的实现
备注：因为这个工程里面的预编译选项没有使用看门狗，所以这两个文件不用管
ConfigurationStore.h：打印机恢复默认设置以及打印机打印设置和检索设置
ConfigurationStore.cpp：对于eeprom的基本读写操作以及对于打印机设置的具体实现
Language.h:打印机语言的定义，一共定义了9种语言，对于每种语言，分为两个部分，一是lcd液晶屏上面的字符串定义，另外一个是上位机上的显示的字符串的定义
Pin.h：针对不同版本固件的引脚功能定义
//BlinkM.h:编译器版本兼容性问题处理
//BlinkM.cpp:发送颜色函数的实现
Servo.h：伺服脉冲的相关定义，定义了一个类
Servo.cpp：Servo类的功能的实现
