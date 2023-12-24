#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleReportAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve report from cache
//
// Retrieve a report that was previously generated and cached
//
common_get_report_v1_response_t*
ModuleReportAPI_reportGetReportFromCacheV1(apiClient_t *apiClient, char *sReportgroupCacheID)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/report/getReportFromCache/{sReportgroupCacheID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/report/getReportFromCache/{sReportgroupCacheID}");


    // Path Params
    long sizeOfPathParams_sReportgroupCacheID = strlen(sReportgroupCacheID)+3 + strlen("{ sReportgroupCacheID }");
    if(sReportgroupCacheID == NULL) {
        goto end;
    }
    char* localVarToReplace_sReportgroupCacheID = malloc(sizeOfPathParams_sReportgroupCacheID);
    sprintf(localVarToReplace_sReportgroupCacheID, "{%s}", "sReportgroupCacheID");

    localVarPath = strReplace(localVarPath, localVarToReplace_sReportgroupCacheID, sReportgroupCacheID);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/pdf"); //produces
    list_addElement(localVarHeaderType,"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"); //produces
    list_addElement(localVarHeaderType,"application/zip"); //produces
    list_addElement(localVarHeaderType,"text/html"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","The URL is valid, but one of the Accept header is not defined or invalid. For example, you set the header \&quot;Accept: application/json\&quot; but the function can only return \&quot;Content-type: image/png\&quot;");
    //}
    //nonprimitive not container
    cJSON *ModuleReportAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    common_get_report_v1_response_t *elementToReturn = common_get_report_v1_response_parseFromJSON(ModuleReportAPIlocalVarJSON);
    cJSON_Delete(ModuleReportAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_sReportgroupCacheID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

