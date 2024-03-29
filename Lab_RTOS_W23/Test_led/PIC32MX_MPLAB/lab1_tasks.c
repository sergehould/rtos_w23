
/* ***************************************************************************
 * File: vTask1.c
 * Description: to complete
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date      		Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *                                  - v1
 *****************************************************************************/

#include <string.h>
#include <stdio.h>
/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#include "croutine.h"
#include "event_groups.h"  
#include "include/public.h"
#include "include/console.h"


/* Private static function declarations */
static void vTask1( void *pvParameters )
{
    pvParameters = pvParameters ; // This is to get rid of annoying warnings
	/* As per most tasks, this task is implemented in an infinite loop. */

	for( ;; )
	{   

    }
}

/* Private static function declarations */
static void vTask2( void *pvParameters )
{

   pvParameters = pvParameters ;    // This is to get rid of annoying warnings
   //while(1);
   	for( ;; )
	{   


    }
}

/* Public function declarations */
void start_all_tasks(void){
     xTaskCreate(	vTask1,						/* Pointer to the function that implements the task. */
					( char * ) "Task 1",	/* Text name for the task.  This is to facilitate debugging only. */
					240,						/* Stack depth in words. */
					NULL,						/* We are not using the task parameter. */
					1,							/* This task will run at priority 1. */
					NULL );						/* We are not using the task handle. */
     
     xTaskCreate( vTask2, ( char * ) "Task 2", 240, NULL, 1, NULL );
}











