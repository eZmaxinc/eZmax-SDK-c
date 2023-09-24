#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertype_response.h"



custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_create(
    int pki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignfoldertype_includeproofsigner,
    int b_ezsignfoldertype_includeproofuser,
    int b_ezsignfoldertype_delegate,
    int b_ezsignfoldertype_reassign
    ) {
    custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_local_var = malloc(sizeof(custom_ezsignfoldertype_response_t));
    if (!custom_ezsignfoldertype_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldertype_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    custom_ezsignfoldertype_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_includeproofsigner = b_ezsignfoldertype_includeproofsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_includeproofuser = b_ezsignfoldertype_includeproofuser;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassign = b_ezsignfoldertype_reassign;

    return custom_ezsignfoldertype_response_local_var;
}


void custom_ezsignfoldertype_response_free(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response) {
    if(NULL == custom_ezsignfoldertype_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) {
        free(custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x);
        custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x = NULL;
    }
    free(custom_ezsignfoldertype_response);
}

cJSON *custom_ezsignfoldertype_response_convertToJSON(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldertype_response->pki_ezsignfoldertype_id
    if (!custom_ezsignfoldertype_response->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", custom_ezsignfoldertype_response->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x
    if (!custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner
    if (!custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofsigner", custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser
    if (!custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIncludeproofuser", custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser) == NULL) {
    goto fail; //Bool
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassign
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassign) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassign", custom_ezsignfoldertype_response->b_ezsignfoldertype_reassign) == NULL) {
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

custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_parseFromJSON(cJSON *custom_ezsignfoldertype_responseJSON){

    custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_local_var = NULL;

    // custom_ezsignfoldertype_response->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "pkiEzsignfoldertypeID");
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofsigner
    cJSON *b_ezsignfoldertype_includeproofsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeIncludeproofsigner");
    if (!b_ezsignfoldertype_includeproofsigner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofsigner))
    {
    goto end; //Bool
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_includeproofuser
    cJSON *b_ezsignfoldertype_includeproofuser = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeIncludeproofuser");
    if (!b_ezsignfoldertype_includeproofuser) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_includeproofuser))
    {
    goto end; //Bool
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeDelegate");
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassign
    cJSON *b_ezsignfoldertype_reassign = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassign");
    if (b_ezsignfoldertype_reassign) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassign))
    {
    goto end; //Bool
    }
    }


    custom_ezsignfoldertype_response_local_var = custom_ezsignfoldertype_response_create (
        pki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsignfoldertype_includeproofsigner->valueint,
        b_ezsignfoldertype_includeproofuser->valueint,
        b_ezsignfoldertype_delegate ? b_ezsignfoldertype_delegate->valueint : 0,
        b_ezsignfoldertype_reassign ? b_ezsignfoldertype_reassign->valueint : 0
        );

    return custom_ezsignfoldertype_response_local_var;
end:
    return NULL;

}
