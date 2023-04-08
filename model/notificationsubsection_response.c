#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationsubsection_response.h"



notificationsubsection_response_t *notificationsubsection_response_create(
    int pki_notificationsubsection_id,
    int fki_notificationsection_id,
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name,
    char *s_notificationsection_name_x,
    char *s_notificationsubsection_name_x
    ) {
    notificationsubsection_response_t *notificationsubsection_response_local_var = malloc(sizeof(notificationsubsection_response_t));
    if (!notificationsubsection_response_local_var) {
        return NULL;
    }
    notificationsubsection_response_local_var->pki_notificationsubsection_id = pki_notificationsubsection_id;
    notificationsubsection_response_local_var->fki_notificationsection_id = fki_notificationsection_id;
    notificationsubsection_response_local_var->obj_notificationsubsection_name = obj_notificationsubsection_name;
    notificationsubsection_response_local_var->s_notificationsection_name_x = s_notificationsection_name_x;
    notificationsubsection_response_local_var->s_notificationsubsection_name_x = s_notificationsubsection_name_x;

    return notificationsubsection_response_local_var;
}


void notificationsubsection_response_free(notificationsubsection_response_t *notificationsubsection_response) {
    if(NULL == notificationsubsection_response){
        return ;
    }
    listEntry_t *listEntry;
    if (notificationsubsection_response->obj_notificationsubsection_name) {
        multilingual_notificationsubsection_name_free(notificationsubsection_response->obj_notificationsubsection_name);
        notificationsubsection_response->obj_notificationsubsection_name = NULL;
    }
    if (notificationsubsection_response->s_notificationsection_name_x) {
        free(notificationsubsection_response->s_notificationsection_name_x);
        notificationsubsection_response->s_notificationsection_name_x = NULL;
    }
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


    // notificationsubsection_response->obj_notificationsubsection_name
    if(notificationsubsection_response->obj_notificationsubsection_name) {
    cJSON *obj_notificationsubsection_name_local_JSON = multilingual_notificationsubsection_name_convertToJSON(notificationsubsection_response->obj_notificationsubsection_name);
    if(obj_notificationsubsection_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objNotificationsubsectionName", obj_notificationsubsection_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // notificationsubsection_response->s_notificationsection_name_x
    if(notificationsubsection_response->s_notificationsection_name_x) {
    if(cJSON_AddStringToObject(item, "sNotificationsectionNameX", notificationsubsection_response->s_notificationsection_name_x) == NULL) {
    goto fail; //String
    }
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

    // define the local variable for notificationsubsection_response->obj_notificationsubsection_name
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name_local_nonprim = NULL;

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

    // notificationsubsection_response->obj_notificationsubsection_name
    cJSON *obj_notificationsubsection_name = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "objNotificationsubsectionName");
    if (obj_notificationsubsection_name) { 
    obj_notificationsubsection_name_local_nonprim = multilingual_notificationsubsection_name_parseFromJSON(obj_notificationsubsection_name); //nonprimitive
    }

    // notificationsubsection_response->s_notificationsection_name_x
    cJSON *s_notificationsection_name_x = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "sNotificationsectionNameX");
    if (s_notificationsection_name_x) { 
    if(!cJSON_IsString(s_notificationsection_name_x) && !cJSON_IsNull(s_notificationsection_name_x))
    {
    goto end; //String
    }
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
        obj_notificationsubsection_name ? obj_notificationsubsection_name_local_nonprim : NULL,
        s_notificationsection_name_x && !cJSON_IsNull(s_notificationsection_name_x) ? strdup(s_notificationsection_name_x->valuestring) : NULL,
        strdup(s_notificationsubsection_name_x->valuestring)
        );

    return notificationsubsection_response_local_var;
end:
    if (obj_notificationsubsection_name_local_nonprim) {
        multilingual_notificationsubsection_name_free(obj_notificationsubsection_name_local_nonprim);
        obj_notificationsubsection_name_local_nonprim = NULL;
    }
    return NULL;

}
