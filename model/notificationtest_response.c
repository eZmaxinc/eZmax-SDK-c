#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationtest_response.h"



notificationtest_response_t *notificationtest_response_create(
    int pki_notificationtest_id,
    int fki_notificationsubsection_id,
    char *s_notificationtest_function,
    char *s_notificationtest_name_x
    ) {
    notificationtest_response_t *notificationtest_response_local_var = malloc(sizeof(notificationtest_response_t));
    if (!notificationtest_response_local_var) {
        return NULL;
    }
    notificationtest_response_local_var->pki_notificationtest_id = pki_notificationtest_id;
    notificationtest_response_local_var->fki_notificationsubsection_id = fki_notificationsubsection_id;
    notificationtest_response_local_var->s_notificationtest_function = s_notificationtest_function;
    notificationtest_response_local_var->s_notificationtest_name_x = s_notificationtest_name_x;

    return notificationtest_response_local_var;
}


void notificationtest_response_free(notificationtest_response_t *notificationtest_response) {
    if(NULL == notificationtest_response){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationtest_response->s_notificationtest_function) {
        free(notificationtest_response->s_notificationtest_function);
        notificationtest_response->s_notificationtest_function = NULL;
    }
    if (notificationtest_response->s_notificationtest_name_x) {
        free(notificationtest_response->s_notificationtest_name_x);
        notificationtest_response->s_notificationtest_name_x = NULL;
    }
    free(notificationtest_response);
}

cJSON *notificationtest_response_convertToJSON(notificationtest_response_t *notificationtest_response) {
    cJSON *item = cJSON_CreateObject();

    // notificationtest_response->pki_notificationtest_id
    if (!notificationtest_response->pki_notificationtest_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationtestID", notificationtest_response->pki_notificationtest_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationtest_response->fki_notificationsubsection_id
    if (!notificationtest_response->fki_notificationsubsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiNotificationsubsectionID", notificationtest_response->fki_notificationsubsection_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationtest_response->s_notificationtest_function
    if (!notificationtest_response->s_notificationtest_function) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestFunction", notificationtest_response->s_notificationtest_function) == NULL) {
    goto fail; //String
    }


    // notificationtest_response->s_notificationtest_name_x
    if (!notificationtest_response->s_notificationtest_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestNameX", notificationtest_response->s_notificationtest_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notificationtest_response_t *notificationtest_response_parseFromJSON(cJSON *notificationtest_responseJSON){

    notificationtest_response_t *notificationtest_response_local_var = NULL;

    // notificationtest_response->pki_notificationtest_id
    cJSON *pki_notificationtest_id = cJSON_GetObjectItemCaseSensitive(notificationtest_responseJSON, "pkiNotificationtestID");
    if (!pki_notificationtest_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationtest_id))
    {
    goto end; //Numeric
    }

    // notificationtest_response->fki_notificationsubsection_id
    cJSON *fki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(notificationtest_responseJSON, "fkiNotificationsubsectionID");
    if (!fki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsubsection_id))
    {
    goto end; //Numeric
    }

    // notificationtest_response->s_notificationtest_function
    cJSON *s_notificationtest_function = cJSON_GetObjectItemCaseSensitive(notificationtest_responseJSON, "sNotificationtestFunction");
    if (!s_notificationtest_function) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_function))
    {
    goto end; //String
    }

    // notificationtest_response->s_notificationtest_name_x
    cJSON *s_notificationtest_name_x = cJSON_GetObjectItemCaseSensitive(notificationtest_responseJSON, "sNotificationtestNameX");
    if (!s_notificationtest_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_name_x))
    {
    goto end; //String
    }


    notificationtest_response_local_var = notificationtest_response_create (
        pki_notificationtest_id->valuedouble,
        fki_notificationsubsection_id->valuedouble,
        strdup(s_notificationtest_function->valuestring),
        strdup(s_notificationtest_name_x->valuestring)
        );

    return notificationtest_response_local_var;
end:
    return NULL;

}
