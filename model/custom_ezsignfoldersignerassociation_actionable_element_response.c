#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldersignerassociation_actionable_element_response.h"



custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner,
    int b_ezsignfoldersignerassociation_hasactionableelements_current,
    int b_ezsignfoldersignerassociation_hasactionableelements_future
    ) {
    custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_local_var = malloc(sizeof(custom_ezsignfoldersignerassociation_actionable_element_response_t));
    if (!custom_ezsignfoldersignerassociation_actionable_element_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->obj_user = obj_user;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->obj_ezsignsigner = obj_ezsignsigner;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->b_ezsignfoldersignerassociation_hasactionableelements_current = b_ezsignfoldersignerassociation_hasactionableelements_current;
    custom_ezsignfoldersignerassociation_actionable_element_response_local_var->b_ezsignfoldersignerassociation_hasactionableelements_future = b_ezsignfoldersignerassociation_hasactionableelements_future;

    return custom_ezsignfoldersignerassociation_actionable_element_response_local_var;
}


void custom_ezsignfoldersignerassociation_actionable_element_response_free(custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response) {
    if(NULL == custom_ezsignfoldersignerassociation_actionable_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message) {
        free(custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message);
        custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(custom_ezsignfoldersignerassociation_actionable_element_response->obj_user);
        custom_ezsignfoldersignerassociation_actionable_element_response->obj_user = NULL;
    }
    if (custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner);
        custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner = NULL;
    }
    free(custom_ezsignfoldersignerassociation_actionable_element_response);
}

cJSON *custom_ezsignfoldersignerassociation_actionable_element_response_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldersignerassociation_actionable_element_response->pki_ezsignfoldersignerassociation_id
    if (!custom_ezsignfoldersignerassociation_actionable_element_response->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", custom_ezsignfoldersignerassociation_actionable_element_response->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->fki_ezsignfolder_id
    if (!custom_ezsignfoldersignerassociation_actionable_element_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", custom_ezsignfoldersignerassociation_actionable_element_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_receivecopy
    if (!custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message
    if (!custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->obj_user
    if(custom_ezsignfoldersignerassociation_actionable_element_response->obj_user) {
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner
    if(custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner);
    if(obj_ezsignsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigner", obj_ezsignsigner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_current
    if (!custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsCurrent", custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_current) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_future
    if(custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_future) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationHasactionableelementsFuture", custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_future) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_parseFromJSON(cJSON *custom_ezsignfoldersignerassociation_actionable_element_responseJSON){

    custom_ezsignfoldersignerassociation_actionable_element_response_t *custom_ezsignfoldersignerassociation_actionable_element_response_local_var = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // custom_ezsignfoldersignerassociation_actionable_element_response->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "pkiEzsignfoldersignerassociationID");
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "tEzsignfoldersignerassociationMessage");
    if (!t_ezsignfoldersignerassociation_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "objUser");
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "objEzsignsigner");
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_current
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_current = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "bEzsignfoldersignerassociationHasactionableelementsCurrent");
    if (!b_ezsignfoldersignerassociation_hasactionableelements_current) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_current))
    {
    goto end; //Bool
    }

    // custom_ezsignfoldersignerassociation_actionable_element_response->b_ezsignfoldersignerassociation_hasactionableelements_future
    cJSON *b_ezsignfoldersignerassociation_hasactionableelements_future = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldersignerassociation_actionable_element_responseJSON, "bEzsignfoldersignerassociationHasactionableelementsFuture");
    if (b_ezsignfoldersignerassociation_hasactionableelements_future) { 
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_hasactionableelements_future))
    {
    goto end; //Bool
    }
    }


    custom_ezsignfoldersignerassociation_actionable_element_response_local_var = custom_ezsignfoldersignerassociation_actionable_element_response_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy->valueint,
        strdup(t_ezsignfoldersignerassociation_message->valuestring),
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL,
        b_ezsignfoldersignerassociation_hasactionableelements_current->valueint,
        b_ezsignfoldersignerassociation_hasactionableelements_future ? b_ezsignfoldersignerassociation_hasactionableelements_future->valueint : 0
        );

    return custom_ezsignfoldersignerassociation_actionable_element_response_local_var;
end:
    if (obj_user_local_nonprim) {
        ezsignfoldersignerassociation_response_compound_user_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_response_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
