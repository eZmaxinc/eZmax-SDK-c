#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notificationsubsection_response.h"



static notificationsubsection_response_t *notificationsubsection_response_create_internal(
    int *pki_notificationsubsection_id,
    int *fki_notificationsection_id,
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name,
    char *s_notificationsection_name_x,
    char *s_notificationsubsection_name_x
    ) {
    notificationsubsection_response_t *notificationsubsection_response_local_var = malloc(sizeof(notificationsubsection_response_t));
    if (!notificationsubsection_response_local_var) {
        return NULL;
    }
    memset(notificationsubsection_response_local_var, 0, sizeof(notificationsubsection_response_t));
    notificationsubsection_response_local_var->_library_owned = 1;
    notificationsubsection_response_local_var->pki_notificationsubsection_id = pki_notificationsubsection_id;
    notificationsubsection_response_local_var->fki_notificationsection_id = fki_notificationsection_id;
    notificationsubsection_response_local_var->obj_notificationsubsection_name = obj_notificationsubsection_name;
    notificationsubsection_response_local_var->s_notificationsection_name_x = s_notificationsection_name_x;
    notificationsubsection_response_local_var->s_notificationsubsection_name_x = s_notificationsubsection_name_x;
    return notificationsubsection_response_local_var;
}

__attribute__((deprecated)) notificationsubsection_response_t *notificationsubsection_response_create(
    int *pki_notificationsubsection_id,
    int *fki_notificationsection_id,
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name,
    char *s_notificationsection_name_x,
    char *s_notificationsubsection_name_x
    ) {
    int *pki_notificationsubsection_id_copy = NULL;
    if (pki_notificationsubsection_id) {
        pki_notificationsubsection_id_copy = malloc(sizeof(int));
        if (pki_notificationsubsection_id_copy) *pki_notificationsubsection_id_copy = *pki_notificationsubsection_id;
    }
    int *fki_notificationsection_id_copy = NULL;
    if (fki_notificationsection_id) {
        fki_notificationsection_id_copy = malloc(sizeof(int));
        if (fki_notificationsection_id_copy) *fki_notificationsection_id_copy = *fki_notificationsection_id;
    }
    notificationsubsection_response_t *result = notificationsubsection_response_create_internal (
        pki_notificationsubsection_id_copy,
        fki_notificationsection_id_copy,
        obj_notificationsubsection_name,
        s_notificationsection_name_x,
        s_notificationsubsection_name_x
        );
    if (!result) {
        free(pki_notificationsubsection_id_copy);
        free(fki_notificationsection_id_copy);
    }
    return result;
}

void notificationsubsection_response_free(notificationsubsection_response_t *notificationsubsection_response) {
    if(NULL == notificationsubsection_response){
        return ;
    }
    if(notificationsubsection_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notificationsubsection_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notificationsubsection_response->pki_notificationsubsection_id) {
        free(notificationsubsection_response->pki_notificationsubsection_id);
        notificationsubsection_response->pki_notificationsubsection_id = NULL;
    }
    if (notificationsubsection_response->fki_notificationsection_id) {
        free(notificationsubsection_response->fki_notificationsection_id);
        notificationsubsection_response->fki_notificationsection_id = NULL;
    }
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
    if(cJSON_AddNumberToObject(item, "pkiNotificationsubsectionID", *notificationsubsection_response->pki_notificationsubsection_id) == NULL) {
    goto fail; //Numeric
    }


    // notificationsubsection_response->fki_notificationsection_id
    if (!notificationsubsection_response->fki_notificationsection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiNotificationsectionID", *notificationsubsection_response->fki_notificationsection_id) == NULL) {
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

    // define the local variable for notificationsubsection_response->pki_notificationsubsection_id
    int *pki_notificationsubsection_id_local_var = NULL;

    // define the local variable for notificationsubsection_response->fki_notificationsection_id
    int *fki_notificationsection_id_local_var = NULL;

    // define the local variable for notificationsubsection_response->obj_notificationsubsection_name
    multilingual_notificationsubsection_name_t *obj_notificationsubsection_name_local_nonprim = NULL;

    char *s_notificationsection_name_x_local_str = NULL;

    char *s_notificationsubsection_name_x_local_str = NULL;

    // notificationsubsection_response->pki_notificationsubsection_id
    cJSON *pki_notificationsubsection_id = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "pkiNotificationsubsectionID");
    if (cJSON_IsNull(pki_notificationsubsection_id)) {
        pki_notificationsubsection_id = NULL;
    }
    if (!pki_notificationsubsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_notificationsubsection_id))
    {
    goto end; //Numeric
    }
    pki_notificationsubsection_id_local_var = malloc(sizeof(int));
    if(!pki_notificationsubsection_id_local_var)
    {
        goto end;
    }
    *pki_notificationsubsection_id_local_var = pki_notificationsubsection_id->valuedouble;

    // notificationsubsection_response->fki_notificationsection_id
    cJSON *fki_notificationsection_id = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "fkiNotificationsectionID");
    if (cJSON_IsNull(fki_notificationsection_id)) {
        fki_notificationsection_id = NULL;
    }
    if (!fki_notificationsection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_notificationsection_id))
    {
    goto end; //Numeric
    }
    fki_notificationsection_id_local_var = malloc(sizeof(int));
    if(!fki_notificationsection_id_local_var)
    {
        goto end;
    }
    *fki_notificationsection_id_local_var = fki_notificationsection_id->valuedouble;

    // notificationsubsection_response->obj_notificationsubsection_name
    cJSON *obj_notificationsubsection_name = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "objNotificationsubsectionName");
    if (cJSON_IsNull(obj_notificationsubsection_name)) {
        obj_notificationsubsection_name = NULL;
    }
    if (obj_notificationsubsection_name) { 
    obj_notificationsubsection_name_local_nonprim = multilingual_notificationsubsection_name_parseFromJSON(obj_notificationsubsection_name); //nonprimitive
    }

    // notificationsubsection_response->s_notificationsection_name_x
    cJSON *s_notificationsection_name_x = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "sNotificationsectionNameX");
    if (cJSON_IsNull(s_notificationsection_name_x)) {
        s_notificationsection_name_x = NULL;
    }
    if (s_notificationsection_name_x) { 
    if(!cJSON_IsString(s_notificationsection_name_x) && !cJSON_IsNull(s_notificationsection_name_x))
    {
    goto end; //String
    }
    }

    // notificationsubsection_response->s_notificationsubsection_name_x
    cJSON *s_notificationsubsection_name_x = cJSON_GetObjectItemCaseSensitive(notificationsubsection_responseJSON, "sNotificationsubsectionNameX");
    if (cJSON_IsNull(s_notificationsubsection_name_x)) {
        s_notificationsubsection_name_x = NULL;
    }
    if (!s_notificationsubsection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_notificationsubsection_name_x))
    {
    goto end; //String
    }


    if (s_notificationsection_name_x && !cJSON_IsNull(s_notificationsection_name_x)) s_notificationsection_name_x_local_str = strdup(s_notificationsection_name_x->valuestring);
    if (s_notificationsubsection_name_x && !cJSON_IsNull(s_notificationsubsection_name_x)) s_notificationsubsection_name_x_local_str = strdup(s_notificationsubsection_name_x->valuestring);

    notificationsubsection_response_local_var = notificationsubsection_response_create_internal (
        pki_notificationsubsection_id_local_var,
        fki_notificationsection_id_local_var,
        obj_notificationsubsection_name ? obj_notificationsubsection_name_local_nonprim : NULL,
        s_notificationsection_name_x_local_str,
        s_notificationsubsection_name_x_local_str
        );

    if (!notificationsubsection_response_local_var) {
        goto end;
    }

    return notificationsubsection_response_local_var;
end:
    if (pki_notificationsubsection_id_local_var) {
        free(pki_notificationsubsection_id_local_var);
        pki_notificationsubsection_id_local_var = NULL;
    }
    if (fki_notificationsection_id_local_var) {
        free(fki_notificationsection_id_local_var);
        fki_notificationsection_id_local_var = NULL;
    }
    if (obj_notificationsubsection_name_local_nonprim) {
        multilingual_notificationsubsection_name_free(obj_notificationsubsection_name_local_nonprim);
        obj_notificationsubsection_name_local_nonprim = NULL;
    }
    if (s_notificationsection_name_x_local_str) {
        free(s_notificationsection_name_x_local_str);
        s_notificationsection_name_x_local_str = NULL;
    }
    if (s_notificationsubsection_name_x_local_str) {
        free(s_notificationsubsection_name_x_local_str);
        s_notificationsubsection_name_x_local_str = NULL;
    }
    return NULL;

}
