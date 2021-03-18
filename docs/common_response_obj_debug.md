# common_response_obj_debug_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**s_memory_usage** | **char \*** | The peak memory allocated during the API request execution. Formatted as a human readable string | 
**s_run_time** | **char \*** | The total server execution time of the API request execution. Formatted as a human readable string | 
**i_sql_selects** | **int** | The number of SQL SELECT queries that were sent to the database server during the API request execution | 
**i_sql_queries** | **int** | The number of SQL INSERT/UPDATE/DELETE queries that were sent to the database server during the API request execution | 
**a_obj_sql_query** | [**list_t**](common_response_obj_sql_query.md) \* | An array of the SQL Queries that were executed during the API request execution | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


