# not_threadsafe_test

The code demonstrates the usage of dlopen vs dlmopen vs direct linking. See [1] for reference.

ivan@ivan-e7440:~/work/Project/Software/not_threadsafe_test/build$ ./main_link
Global: B
Static: B
Normal: A
Global: B
Static: B
Normal: B
ivan@ivan-e7440:~/work/Project/Software/not_threadsafe_test/build$ ./main_dlopen
Global: B
Static: B
Normal: A
Global: B
Static: B
Normal: B
ivan@ivan-e7440:~/work/Project/Software/not_threadsafe_test/build$ ./main_dlmopen
Global: A
Static: A
Normal: A
Global: B
Static: B
Normal: B 

[1] https://stackoverflow.com/questions/1745975/load-multiple-copies-of-a-shared-library
