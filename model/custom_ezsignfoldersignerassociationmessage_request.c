#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociationmessage_request.h"



custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_create(
    int fki_ezsignfoldersignerassociation_id,
    char *t_ezsignfoldersignerassociation_message
    ) {
    custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_local_var = malloc(sizeof(custom_ezsignfoldersignerassociationmessage_request_t));
    if (!custom_ezsignfoldersignerassociationmessage_request_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociationmessage_request_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociationmessage_request_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;

    return custom_ezsignfoldersignerassociationmessage_request_local_var;
}


void custom_ezsignfoldersignerassociationmessage_request_free(custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request) {
    if(NULL == custom_ezsignfoldersignerassociationmessage_request){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message) {
        free(custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message);
        custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message = NULL;
    }
    free(custom_ezsignfoldersignerassociationmessage_request);
}

cJSON *custom_ezsignfoldersignerassociationmessage_request_convertToJSON(custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociationmessage_request->fki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociationmessage_request->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", custom_ezsignfoldersignerassociationmessage_request->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message
    if(custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_parseFromJSON(cJSON *custom_ezsignfoldersignerassociationmessage_requestJSON){

    custom_ezsignfoldersignerassociationmessage_request_t *custom_ezsignfoldersignerassociationmessage_request_local_var = NULL;

    // custom_ezsignfoldersignerassociationmessage_request->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationmessage_requestJSON, "fkiEzsignfoldersignerassociationID");
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociationmessage_request->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociationmessage_requestJSON, "tEzsignfoldersignerassociationMessage");
    if (t_ezsignfoldersignerassociation_message) { 
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }
    }


    custom_ezsignfoldersignerassociationmessage_request_local_var = custom_ezsignfoldersignerassociationmessage_request_create (
        fki_ezsignfoldersignerassociation_id->valuedouble,
        t_ezsignfoldersignerassociation_message ? strdup(t_ezsignfoldersignerassociation_message->valuestring) : NULL
        );

    return custom_ezsignfoldersignerassociationmessage_request_local_var;
end:
    return NULL;

}
