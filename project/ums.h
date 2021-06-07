#pragma once

//EnterUmsSchedulingMode()
//converts a standard pthread in a UMS Scheduler thread, the function takes as input a completion list of worker threads and a entry point function;
//DequeueUmsCompletionListItems()
//called from the scheduler thread obtains a list of current available thread to be run, if no thread is available to be run the function should be blocking until a thread becomes available;
//ExecuteUmsThread()
//called from a scheduler thread, it executes the passed worker thread by switching the entire context;
//UmsThreadYield()
//called from a worker thread, it pauses the execution of the current thread and the UMS scheduler entry point is executed for determining the next thread to be scheduled;