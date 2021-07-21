#define CMD_EMPTY 0
#define CMD_READ  1
#define CMD_WRITE 2

#define RMB_COMMAND 0x04020010
#define RMB_ADDRESS 0x04020014
#define RMB_VALUE   0x04020018

void memory_loop(){
	while(1)
	{
		while(*(int *)(RMB_COMMAND) == CMD_EMPTY);

		if(*(int *)(RMB_COMMAND) == CMD_READ)
		{
			*(int *)(RMB_VALUE) = **(int **)(RMB_ADDRESS);
		}

		if(*(int *)(RMB_COMMAND) == CMD_WRITE)
                {
                        **(int **)(RMB_ADDRESS) = *(int *)(RMB_VALUE);
                }

		*(int *)(RMB_COMMAND) = CMD_EMPTY;

	}
}

