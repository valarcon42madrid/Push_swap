    ORDERING ALGORITHM FOR TWO PILES:

- Use "make" and then "./push_swap '3 4 1 6 8 111' to recive the clues to order the given pile by using the support pile.

      NOTES:

  For the following instructions, if the instruction is not possible, the part of it that can't be executed won't.

Code	        Instruction	                        Action

sa	            swap a	                            swaps the 2 top elements of stack a

sb	            swap b	                            swaps the 2 top elements of stack b

ss	            swap a + swap b	                    both sa and sb

pa	            push a	                            moves the top element of stack b at the top of stack a

pb	            push b	                            moves the top element of stack a at the top of stack b

ra    	        rotate a	                        shifts all elements of stack a from bottom to top

rb	            rotate b	                        shifts all elements of stack b from bottom to top

rr	            rotate a + rotate b	                both ra and rb

rra	            reverse rotate a	                shifts all elements of stack a from top to bottom

rrb	            reverse rotate b	                shifts all elements of stack b from top to bottom

rrr	            reverse rotate a + reverse rotate b	both rra and rrb

        * It's added a tester from "yfu@student.42lyon.fr" that allows you to see the movements by "cd push_swap_tester" + "bash debug.sh 9 4 8 7".
        It could fail at some of the basic_test.sh due the ausence of a 'void check_leaks();', but it could be adapted to demonstrate the success at all requirements and, most important, the rest of the tests work perfectly.
