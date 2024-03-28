#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertype_response.h"



custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_create(
    int pki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignfoldertype_sendproofezsignsigner,
    int b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int b_ezsignfoldertype_delegate,
    int b_ezsignfoldertype_discussion,
    int b_ezsignfoldertype_reassignezsignsigner,
    int b_ezsignfoldertype_reassignuser
    ) {
    custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_local_var = malloc(sizeof(custom_ezsignfoldertype_response_t));
    if (!custom_ezsignfoldertype_response_local_var) {
        return NULL;
    }
    custom_ezsignfoldertype_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    custom_ezsignfoldertype_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;

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
    if(custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser) == NULL) {
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
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendproofezsignsigner");
    if (b_ezsignfoldertype_sendproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeDelegate");
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeDiscussion");
    if (b_ezsignfoldertype_discussion) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_discussion))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassignezsignsigner");
    if (b_ezsignfoldertype_reassignezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignezsignsigner))
    {
    goto end; //Bool
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassignuser");
    if (b_ezsignfoldertype_reassignuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignuser))
    {
    goto end; //Bool
    }
    }


    custom_ezsignfoldertype_response_local_var = custom_ezsignfoldertype_response_create (
        pki_ezsignfoldertype_id->valuedouble,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        b_ezsignfoldertype_sendproofezsignsigner ? b_ezsignfoldertype_sendproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner ? b_ezsignfoldertype_allowdownloadattachmentezsignsigner->valueint : 0,
        b_ezsignfoldertype_allowdownloadproofezsignsigner ? b_ezsignfoldertype_allowdownloadproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_delegate ? b_ezsignfoldertype_delegate->valueint : 0,
        b_ezsignfoldertype_discussion ? b_ezsignfoldertype_discussion->valueint : 0,
        b_ezsignfoldertype_reassignezsignsigner ? b_ezsignfoldertype_reassignezsignsigner->valueint : 0,
        b_ezsignfoldertype_reassignuser ? b_ezsignfoldertype_reassignuser->valueint : 0
        );

    return custom_ezsignfoldertype_response_local_var;
end:
    return NULL;

}
