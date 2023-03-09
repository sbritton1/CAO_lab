		.text
		j	main			# Jump to main-routine

insert:						# Arguments: array base address, array length before insertion, element to insert, index to insert at
						# Step 1: Loop from end of array to i:
						#	1.1:  a[j+1]=a[j] just shift over the element
						# Step 2: Insert element a[i]=element
						# Step 3: return
		
						
b_search:					# Arguments: sorted array base addres and length of the sorted array 
						# Step 1: set low to -1, high to length
						# Step 2: Loop while low < high - 1
						#	2.1: mid = (low + high) / 2
						#	2.2: set high to mid if a[mid] is higher than the given element, else set low to mid
						# Step 3: return high


i_sort:						# Arguments: unsorted array base addres and length of the unsorted array
		# store s0
		addi	$sp, $sp, -4		
		sw	$s0, 0($sp)
		
		# store s1
		addi	$sp, $sp, -4		
		sw	$s1, 0($sp)
		
		# store arguments
		move 	$s0, $a0
		move	$s1, $a1
						# Step 1: Make an empty array with the same size
		# store s2
		addi	$sp, $sp, -4		
		sw	$s2, 0($sp)
		
		# $s2=length*4
		sll	$s2, $a1, 2
		# This instruction creates a stack frame large enough to contain the array		
		sub	$sp, $sp, $s2
		# store the base addres of b in s2
		move	$s2, $sp		
				
						# Step 2: Loop size amount of times:
		# store s3
		addi	$sp, $sp, -4		
		sw	$s3, 0($sp)
		
		# use s3 as i and set it to zero
		move	$s3, $zero
		
		# branch if i >= length
for_sort:	bge	$s3, $s1, exit_sort	
						#	2.1: get the position of array[i] in the sorted array using binary search
		
						#	2.2: place array[i] at the correct position in the sorted array
		j for_sort
exit_sort:

						# Step 3: Loop size amount of times:
						#	3.1 set array[i] = sorted_array[i]
		# TODO!!!!!! restore values 
		add	$sp, $sp, $s0
		
		lw	$s1, 0($sp)
		addi	$sp, $sp, 4
		
		lw	$s0, 0($sp)
		addi	$sp, $sp, 4	
						# Step 4: return
						
		

		.data
str1:		.asciiz "Insert the array size \n"
str2:		.asciiz "Insert the array elements,one per line  \n"
str3:		.asciiz "The sorted array is : \n"
str5:		.asciiz "\n"

		.text
		.globl	main
main: 
		la	$a0, str1		# Print of str1
		li	$v0, 4			#
		syscall				#

		li	$v0, 5			# Get the array size(n) and
		syscall				# and put it in $v0
		move	$s2, $v0		# $s2=n
		sll	$s0, $v0, 2		# $s0=n*4
		sub	$sp, $sp, $s0		# This instruction creates a stack
						# frame large enough to contain
						# the array
		la	$a0, str2		#
		li	$v0, 4			# Print of str2
		syscall				#
            
		move	$s1, $zero		# i=0
for_get:	bge	$s1, $s2, exit_get	# if i>=n go to exit_for_get
		sll	$t0, $s1, 2		# $t0=i*4
		add	$t1, $t0, $sp		# $t1=$sp+i*4
		li	$v0, 5			# Get one element of the array
		syscall				#
		sw	$v0, 0($t1)		# The element is stored
						# at the address $t1
		la	$a0, str5
		li	$v0, 4
		syscall
		addi	$s1, $s1, 1		# i=i+1
		j	for_get
exit_get:	move	$a0, $sp		# $a0=base address af the array
		move	$a1, $s2		# $a1=size of the array
		jal	isort			# isort(a,n)
						# In this moment the array has been 
						# sorted and is in the stack frame 
		la	$a0, str3		# Print of str3
		li	$v0, 4
		syscall

		move	$s1, $zero		# i=0
for_print:	bge	$s1, $s2, exit_print	# if i>=n go to exit_print
		sll	$t0, $s1, 2		# $t0=i*4
		add	$t1, $sp, $t0		# $t1=address of a[i]
		lw	$a0, 0($t1)		#
		li	$v0, 1			# print of the element a[i]
		syscall				#

		la	$a0, str5
		li	$v0, 4
		syscall
		addi	$s1, $s1, 1		# i=i+1
		j	for_print
exit_print:	add	$sp, $sp, $s0		# elimination of the stack frame 
              
		li	$v0, 10			# EXIT
		syscall				#
