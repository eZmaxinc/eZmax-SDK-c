#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_notificationtestgetnotificationtests_response.h"


char* e_notificationpreference_statuscustom_notificationtestgetnotificationtests_response_ToString(ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response__e e_notificationpreference_status) {
    char* e_notificationpreference_statusArray[] =  { "NULL", "Show", "Hide", "Pin" };
	return e_notificationpreference_statusArray[e_notificationpreference_status];
}

ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response__e e_notificationpreference_statuscustom_notificationtestgetnotificationtests_response_FromString(char* e_notificationpreference_status){
    int stringToReturn = 0;
    char *e_notificationpreference_statusArray[] =  { "NULL", "Show", "Hide", "Pin" };
    size_t sizeofArray = sizeof(e_notificationpreference_statusArray) / sizeof(e_notificationpreference_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_notificationpreference_status, e_notificationpreference_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_create(
    int pki_notificationtest_id,
    multilingual_notificationtest_name_t *obj_notificationtest_name,
    int fki_notificationsubsection_id,
    char *s_notificationtest_function,
    char *s_notificationtest_name_x,
    field_e_notificationpreference_status_t *e_notificationpreference_status,
    int i_notificationtest
    ) {
    custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_local_var = malloc(sizeof(custom_notificationtestgetnotificationtests_response_t));
    if (!custom_notificationtestgetnotificationtests_response_local_var) {
        return NULL;
    }
    custom_notificationtestgetnotificationtests_response_local_var->pki_notificationtest_id = pki_notificationtest_id;
    custom_notificationtestgetnotificationtests_response_local_var->obj_notificationtest_name = obj_notificationtest_name;
    custom_notificationtestgetnotificationtests_response_local_var->fki_notificationsubsection_id = fki_notificationsubsection_id;
    custom_notificationtestgetnotificationtests_response_local_var->s_notificationtest_function = s_notificationtest_function;
    custom_notificationtestgetnotificationtests_response_local_var->s_notificationtest_name_x = s_notificationtest_name_x;
    custom_notificationtestgetnotificationtests_response_local_var->e_notificationpreference_status = e_notificationpreference_status;
    custom_notificationtestgetnotificationtests_response_local_var->i_notificationtest = i_notificationtest;

    return custom_notificationtestgetnotificationtests_response_local_var;
}


void custom_notificationtestgetnotificationtests_response_free(custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response) {
    if(NULL == custom_notificationtestgetnotificationtests_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_notificationtestgetnotificationtests_response->obj_notificationtest_name) {
        multilingual_notificationtest_name_free(custom_notificationtestgetnotificationtests_response->obj_notificationtest_name);
        custom_notificationtestgetnotificationtests_response->obj_notificationtest_name = NULL;
    }
    if (custom_notificationtestgetnotificationtests_response->s_notificationtest_function) {
        free(custom_notificationtestgetnotificationtests_response->s_notificationtest_function);
        custom_notificationtestgetnotificationtests_response->s_notificationtest_function = NULL;
    }
    if (custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x) {
        free(custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x);
        custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x = NULL;
    }
    if (custom_notificationtestgetnotificationtests_response->e_notificationpreference_status) {
        field_e_notificationpreference_status_free(custom_notificationtestgetnotificationtests_response->e_notificationpreference_status);
        custom_notificationtestgetnotificationtests_response->e_notificationpreference_status = NULL;
    }
    free(custom_notificationtestgetnotificationtests_response);
}

cJSON *custom_notificationtestgetnotificationtests_response_convertToJSON(custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_notificationtestgetnotificationtests_response->pki_notificationtest_id
    if (!custom_notificationtestgetnotificationtests_response->pki_notificationtest_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationtestID", custom_notificationtestgetnotificationtests_response->pki_notificationtest_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_notificationtestgetnotificationtests_response->obj_notificationtest_name
    if (!custom_notificationtestgetnotificationtests_response->obj_notificationtest_name) {
        goto fail;
    }
    cJSON *obj_notificationtest_name_local_JSON = multilingual_notificationtest_name_convertToJSON(custom_notificationtestgetnotificationtests_response->obj_notificationtest_name);
    if(obj_notificationtest_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objNotificationtestName", obj_notificationtest_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // custom_notificationtestgetnotificationtests_response->fki_notificationsubsection_id
    if (!custom_notificationtestgetnotificationtests_response->fki_notificationsubsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiNotificationsubsectionID", custom_notificationtestgetnotificationtests_response->fki_notificationsubsection_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_notificationtestgetnotificationtests_response->s_notificationtest_function
    if (!custom_notificationtestgetnotificationtests_response->s_notificationtest_function) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestFunction", custom_notificationtestgetnotificationtests_response->s_notificationtest_function) == NULL) {
    goto fail; //String
    }


    // custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x
    if (!custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationtestNameX", custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x) == NULL) {
    goto fail; //String
    }


    // custom_notificationtestgetnotificationtests_response->e_notificationpreference_status
    if (ezmax_api_definition__full_custom_notificationtestgetnotificationtests_response__NULL == custom_notificationtestgetnotificationtests_response->e_notificationpreference_status) {
        goto fail;
    }
    cJSON *e_notificationpreference_status_local_JSON = field_e_notificationpreference_status_convertToJSON(custom_notificationtestgetnotificationtests_response->e_notificationpreference_status);
    if(e_notificationpreference_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eNotificationpreferenceStatus", e_notificationpreference_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_notificationtestgetnotificationtests_response->i_notificationtest
    if (!custom_notificationtestgetnotificationtests_response->i_notificationtest) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iNotificationtest", custom_notificationtestgetnotificationtests_response->i_notificationtest) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_parseFromJSON(cJSON *custom_notificationtestgetnotificationtests_responseJSON){

    custom_notificationtestgetnotificationtests_response_t *custom_notificationtestgetnotificationtests_response_local_var = NULL;

    // define the local variable for custom_notificationtestgetnotificationtests_response->obj_notificationtest_name
    multilingual_notificationtest_name_t *obj_notificationtest_name_local_nonprim = NULL;

    // define the local variable for custom_notificationtestgetnotificationtests_response->e_notificationpreference_status
    field_e_notificationpreference_status_t *e_notificationpreference_status_local_nonprim = NULL;

    // custom_notificationtestgetnotificationtests_response->pki_notificationtest_id
    cJSON *pki_notificationtest_id = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "pkiNotificationtestID");
    if (!pki_notificationtest_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationtest_id))
    {
    goto end; //Numeric
    }

    // custom_notificationtestgetnotificationtests_response->obj_notificationtest_name
    cJSON *obj_notificationtest_name = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "objNotificationtestName");
    if (!obj_notificationtest_name) {
        goto end;
    }

    
    obj_notificationtest_name_local_nonprim = multilingual_notificationtest_name_parseFromJSON(obj_notificationtest_name); //nonprimitive

    // custom_notificationtestgetnotificationtests_response->fki_notificationsubsection_id
    cJSON *fki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "fkiNotificationsubsectionID");
    if (!fki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsubsection_id))
    {
    goto end; //Numeric
    }

    // custom_notificationtestgetnotificationtests_response->s_notificationtest_function
    cJSON *s_notificationtest_function = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "sNotificationtestFunction");
    if (!s_notificationtest_function) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_function))
    {
    goto end; //String
    }

    // custom_notificationtestgetnotificationtests_response->s_notificationtest_name_x
    cJSON *s_notificationtest_name_x = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "sNotificationtestNameX");
    if (!s_notificationtest_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationtest_name_x))
    {
    goto end; //String
    }

    // custom_notificationtestgetnotificationtests_response->e_notificationpreference_status
    cJSON *e_notificationpreference_status = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "eNotificationpreferenceStatus");
    if (!e_notificationpreference_status) {
        goto end;
    }

    
    e_notificationpreference_status_local_nonprim = field_e_notificationpreference_status_parseFromJSON(e_notificationpreference_status); //custom

    // custom_notificationtestgetnotificationtests_response->i_notificationtest
    cJSON *i_notificationtest = cJSON_GetObjectItemCaseSensitive(custom_notificationtestgetnotificationtests_responseJSON, "iNotificationtest");
    if (!i_notificationtest) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_notificationtest))
    {
    goto end; //Numeric
    }


    custom_notificationtestgetnotificationtests_response_local_var = custom_notificationtestgetnotificationtests_response_create (
        pki_notificationtest_id->valuedouble,
        obj_notificationtest_name_local_nonprim,
        fki_notificationsubsection_id->valuedouble,
        strdup(s_notificationtest_function->valuestring),
        strdup(s_notificationtest_name_x->valuestring),
        e_notificationpreference_status_local_nonprim,
        i_notificationtest->valuedouble
        );

    return custom_notificationtestgetnotificationtests_response_local_var;
end:
    if (obj_notificationtest_name_local_nonprim) {
        multilingual_notificationtest_name_free(obj_notificationtest_name_local_nonprim);
        obj_notificationtest_name_local_nonprim = NULL;
    }
    if (e_notificationpreference_status_local_nonprim) {
        field_e_notificationpreference_status_free(e_notificationpreference_status_local_nonprim);
        e_notificationpreference_status_local_nonprim = NULL;
    }
    return NULL;

}
