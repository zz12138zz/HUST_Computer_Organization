 .text
#################################################################################
#本程序实现（字节地址0x200，字地址0x80）开始的8个字单元的降序排序,此程序可在mars mips仿真器中运行,运行时请将Rars Setting中的Memory Configuration设置为Compact，data at address 0
##################################################################################
 .text
sort_init:
 addi s0,zero,-1
 addi s1,zero,0
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 addi s0,s0,1
 addi s1,s1,4
 sw s0,512(s1)
 
 addi s0,zero,0   
 addi s1,zero,28   #排序区间
sort_loop:
 lw s3,512(s0)     
 lw s4,512(s1)
 slt t0,s3,s4
 beq t0,zero,sort_next   #降序排序
 sw s3, 512(s1)
 sw s4, 512(s0)   
sort_next:
 addi s1, s1, -4   
 beq s0, s1,  sort_next1  
 beq zero,zero,sort_loop
sort_next1:
 addi s0,s0,4
 addi s1,zero,28
 beq s0, s1, ProgramEnd
 beq zero,zero,sort_loop
 ProgramEnd:beq zero,zero,ProgramEnd  #死循环
