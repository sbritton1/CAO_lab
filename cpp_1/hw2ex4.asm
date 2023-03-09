.data
i: .word 3
j: .word 5
n: .word 2
m: .word 8

.text
main:
	addi $sp, $sp, -20 		#allocate space on stack
	sw $ra, 0($sp)			#obtain return address
	sw $s0, 4($sp)			#save registers on stack
	sw $s1, 8($sp)
	sw $s2, 12($sp)
	sw $s3, 16($sp)
	
	lw $s0, i				#load data on registers
	lw $s1, j
	lw $s2, n
	lw $s3, m
	jal A					#jump and link to function A
	
	lw $ra, 0($sp)			#restore everything from stack
	lw $s0, 4($sp)
	lw $s1, 8($sp)
	lw $s2, 12($sp)
	lw $s3, 16($sp)
	
	li $v0, $0				#return 0
	
A:
	addi $sp, $sp, -12
	sw $ra, 0($sp)
	sw $s0, 4($sp)
	sw $s1, 8($sp)
	
	add $a0, $s0, $0		#give a0 value of s0
	add $a1, $s2, $0
	add $a2, $s1, $0
	add $a3, $s3, $0
	jal B					#jump and link to function B
	add $t0, $v0, $0
	add $a0, $a2, $0
	add $a1, $a3, $0
	jal B
	
	lw $ra, 0($sp)
	lw $s0, 4($sp)
	lw $s1, 8($sp)
	addi $sp, $sp, 12		#deallocate space on stack
	add $v0, $v0, $t0
	jr $ra
	
B:
	addi $sp, $sp, -12
	sw $ra, 0($sp)
	sw $s0, 4($sp)
	sw $s1, 8($sp)
	
	mul $v0, $a0, $a1		#multiplication of a0 and a1 stored in v0
	lw $ra, 0($sp)
	lw $s0, 4($sp)
	lw $s1, 8($sp)
	addi $sp, $sp, 12
	
	jr $ra