#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationsubsection_response.h"



notificationsubsection_response_t *notificationsubsection_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    char *s_notificationsubsection_name_x
    ) {
    notificationsubsection_response_t *notificationsubsection_response_local_var = malloc(sizeof(notificationsubsection_response_t));
    if (!notificationsubsection_response_local_var) {
        return NULL;
    }
    notificationsubsection_response_local_var->pki_notificationsubsection_id = pki_notificationsubsection_id;
    notificationsubsection_response_local_var->fki_notificationsection_id = fki_notificationsection_id;
    notificationsubsection_response_local_var->s_notificationsubsection_name_x = s_notificationsubsection_name_x;

    return notificationsubsection_response_local_var;
}


void notificationsubsection_response_free(notificationsubsection_response_t *notificationsubsection_response) {
    if(NULL == notificationsubsection_response){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationsubsection_response->s_notificationsubsection_name_x) {
        free(notificationsubsection_response->s_notificationsubsection_name_x);
        notificationsubsection_response->s_notificationsubsection_name_x = NULL;
    }
    free(notificationsubsection_response);
}

cJSON *notificationsubsection_response_convertToJSON(notificationsubsection_response_t *notificationsubsection_response) {
    cJSON *item = cJSON_CreateObject();

    // notificationsubsection_response->pki_notificationsubsection_id
    if (!notificationsubsection_response->pki_notificationsubsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiNotificationsubsectionID", notificationsubsection_response->pki_notificationsubsection_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationsubsection_response->fki_notificationsection_id
    if (!notificationsubsection_response->fki_notificationsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiNotificationsectionID", notificationsubsection_response->fki_notificationsection_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationsubsection_response->s_notificationsubsection_name_x
    if (!notificationsubsection_response->s_notificationsubsection_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sNotificationsubsectionNameX", notificationsubsection_response->s_notificationsubsection_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notificationsubsection_response_t *notificationsubsection_response_parseFromJSON(cJSON *notificationsubsection_responseJSON){

    notificationsubsection_response_t *notificationsubsection_response_local_var = NULL;

    // notificationsubsection_response->pki_notificationsubsection_id
    cJSON *pki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "pkiNotificationsubsectionID");
    if (!pki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationsubsection_id))
    {
    goto end; //Numeric
    }

    // notificationsubsection_response->fki_notificationsection_id
    cJSON *fki_notificationsection_id = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "fkiNotificationsectionID");
    if (!fki_notificationsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsection_id))
    {
    goto end; //Numeric
    }

    // notificationsubsection_response->s_notificationsubsection_name_x
    cJSON *s_notificationsubsection_name_x = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "sNotificationsubsectionNameX");
    if (!s_notificationsubsection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationsubsection_name_x))
    {
    goto end; //String
    }


    notificationsubsection_response_local_var = notificationsubsection_response_create (
        pki_notificationsubsection_id->valuedouble,
        fki_notificationsection_id->valuedouble,
        strdup(s_notificationsubsection_name_x->valuestring)
        );

    return notificationsubsection_response_local_var;
end:
    return NULL;

}
