#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ObjectEzsignbulksendtransmissionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}");


    // Path Params
    long sizeOfPathParams_pkiEzsignbulksendtransmissionID =  + strlen("{ pkiEzsignbulksendtransmissionID }");
    if(pkiEzsignbulksendtransmissionID == 0){
        goto end;
    }
    char* localVarToReplace_pkiEzsignbulksendtransmissionID = malloc(sizeOfPathParams_pkiEzsignbulksendtransmissionID);
    snprintf(localVarToReplace_pkiEzsignbulksendtransmissionID, sizeOfPathParams_pkiEzsignbulksendtransmissionID, "{%s}", "pkiEzsignbulksendtransmissionID");

    char localVarBuff_pkiEzsignbulksendtransmissionID[256];
    intToStr(localVarBuff_pkiEzsignbulksendtransmissionID, pkiEzsignbulksendtransmissionID);

    localVarPath = strReplace(localVarPath, localVarToReplace_pkiEzsignbulksendtransmissionID, localVarBuff_pkiEzsignbulksendtransmissionID);



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","Successful response");
    }
    if (apiClient->response_code == 404) {
        printf("%s\n","The element you are trying to work on does not exist");
    }
    //nonprimitive not container
    cJSON *ObjectEzsignbulksendtransmissionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ezsignbulksendtransmission_get_object_v1_response_t *elementToReturn = ezsignbulksendtransmission_get_object_v1_response_parseFromJSON(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
    cJSON_Delete(ObjectEzsignbulksendtransmissionAPIlocalVarJSON);
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
    free(localVarToReplace_pkiEzsignbulksendtransmissionID);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

