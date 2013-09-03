Projects
========

##Sina微博舆情分析

* Sina微博舆情分析系统，对用户微薄内容使用ICTCLAS进行分词，根据停用词表去掉停用词，同时按照词频排序，利用wordnet去掉同义词，然后取前1000个词作为特征向量的维度，然后对每条微薄构造相应的特征向量，最后运用K-Mean聚类算法聚类，得到聚类中心点附近的多个词作为微博舆情；


##hadoop

* 系统的学习了hadoop的原理，以及HDFS数据存储，Map/Reduce算法相关的编程原理，并实现了相应的测试实例。


##数据挖掘算法

* 系统的学习和调研了数据挖掘的相关算法，如k近邻、朴素贝叶斯法、决策树、逻辑斯谛回归与最大熵模型、支持向量机、提升方法、EM算法及其推广、隐马可夫模型、条件随机场、K-Means聚类等，并在LIBSVM官网提供的开放数据集的基础之上实现相应的算法；


##智能抄表终端

* 智能抄表终端开发，通过串口连接智能电表和STR711芯片构成智能抄表终端，实现智能电表数据采集以及其他的一些控制（如通过字模实现智能电表LED汉字显示），同时STR711芯片连接Zigbee模块，以使多个智能抄表终端组成小局域网，局域网网关抄表终端连接GPS模块，通过GPS连接远程总控主机，实现智能抄表功能。


##门禁系统

* 门禁系统开发，采用PX270 ARM11芯片和Atmega128芯片，设计并开发了一个门禁系统。通过研究两个芯片各个端口的功能，设计了芯片与芯片、芯片与外设之间的连接电路图；在PX270编译运行Linux内核，采用QT编程设计控制界面和相应的控制逻辑；自定义芯片之间的通信协议；充分发挥Atmega128芯片的性能，利用其内置的时钟中断机制，采用C语言内嵌汇编的方式，编程实现了一个小的实时调度程序，并在此基础上实现了简单的存储管理和设备驱动程序；
