#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "colleague_request_v2.h"



static colleague_request_v2_t *colleague_request_v2_create_internal(
    int *pki_colleague_id,
    int *fki_user_id,
    int *fki_user_id_colleague,
    int *b_colleague_ezsignemail,
    int *b_colleague_financial,
    int *b_colleague_usecloneemail,
    int *b_colleague_attachment,
    int *b_colleague_canafe,
    int *b_colleague_permission,
    int *b_colleague_realestatecompleted,
    char *dt_colleague_from,
    char *dt_colleague_to,
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign,
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress
    ) {
    colleague_request_v2_t *colleague_request_v2_local_var = malloc(sizeof(colleague_request_v2_t));
    if (!colleague_request_v2_local_var) {
        return NULL;
    }
    memset(colleague_request_v2_local_var, 0, sizeof(colleague_request_v2_t));
    colleague_request_v2_local_var->_library_owned = 1;
    colleague_request_v2_local_var->pki_colleague_id = pki_colleague_id;
    colleague_request_v2_local_var->fki_user_id = fki_user_id;
    colleague_request_v2_local_var->fki_user_id_colleague = fki_user_id_colleague;
    colleague_request_v2_local_var->b_colleague_ezsignemail = b_colleague_ezsignemail;
    colleague_request_v2_local_var->b_colleague_financial = b_colleague_financial;
    colleague_request_v2_local_var->b_colleague_usecloneemail = b_colleague_usecloneemail;
    colleague_request_v2_local_var->b_colleague_attachment = b_colleague_attachment;
    colleague_request_v2_local_var->b_colleague_canafe = b_colleague_canafe;
    colleague_request_v2_local_var->b_colleague_permission = b_colleague_permission;
    colleague_request_v2_local_var->b_colleague_realestatecompleted = b_colleague_realestatecompleted;
    colleague_request_v2_local_var->dt_colleague_from = dt_colleague_from;
    colleague_request_v2_local_var->dt_colleague_to = dt_colleague_to;
    colleague_request_v2_local_var->e_colleague_ezsign = e_colleague_ezsign;
    colleague_request_v2_local_var->e_colleague_realestateinprogress = e_colleague_realestateinprogress;
    return colleague_request_v2_local_var;
}

__attribute__((deprecated)) colleague_request_v2_t *colleague_request_v2_create(
    int *pki_colleague_id,
    int *fki_user_id,
    int *fki_user_id_colleague,
    int *b_colleague_ezsignemail,
    int *b_colleague_financial,
    int *b_colleague_usecloneemail,
    int *b_colleague_attachment,
    int *b_colleague_canafe,
    int *b_colleague_permission,
    int *b_colleague_realestatecompleted,
    char *dt_colleague_from,
    char *dt_colleague_to,
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign,
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress
    ) {
    int *pki_colleague_id_copy = NULL;
    if (pki_colleague_id) {
        pki_colleague_id_copy = malloc(sizeof(int));
        if (pki_colleague_id_copy) *pki_colleague_id_copy = *pki_colleague_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_user_id_colleague_copy = NULL;
    if (fki_user_id_colleague) {
        fki_user_id_colleague_copy = malloc(sizeof(int));
        if (fki_user_id_colleague_copy) *fki_user_id_colleague_copy = *fki_user_id_colleague;
    }
    int *b_colleague_ezsignemail_copy = NULL;
    if (b_colleague_ezsignemail) {
        b_colleague_ezsignemail_copy = malloc(sizeof(int));
        if (b_colleague_ezsignemail_copy) *b_colleague_ezsignemail_copy = *b_colleague_ezsignemail;
    }
    int *b_colleague_financial_copy = NULL;
    if (b_colleague_financial) {
        b_colleague_financial_copy = malloc(sizeof(int));
        if (b_colleague_financial_copy) *b_colleague_financial_copy = *b_colleague_financial;
    }
    int *b_colleague_usecloneemail_copy = NULL;
    if (b_colleague_usecloneemail) {
        b_colleague_usecloneemail_copy = malloc(sizeof(int));
        if (b_colleague_usecloneemail_copy) *b_colleague_usecloneemail_copy = *b_colleague_usecloneemail;
    }
    int *b_colleague_attachment_copy = NULL;
    if (b_colleague_attachment) {
        b_colleague_attachment_copy = malloc(sizeof(int));
        if (b_colleague_attachment_copy) *b_colleague_attachment_copy = *b_colleague_attachment;
    }
    int *b_colleague_canafe_copy = NULL;
    if (b_colleague_canafe) {
        b_colleague_canafe_copy = malloc(sizeof(int));
        if (b_colleague_canafe_copy) *b_colleague_canafe_copy = *b_colleague_canafe;
    }
    int *b_colleague_permission_copy = NULL;
    if (b_colleague_permission) {
        b_colleague_permission_copy = malloc(sizeof(int));
        if (b_colleague_permission_copy) *b_colleague_permission_copy = *b_colleague_permission;
    }
    int *b_colleague_realestatecompleted_copy = NULL;
    if (b_colleague_realestatecompleted) {
        b_colleague_realestatecompleted_copy = malloc(sizeof(int));
        if (b_colleague_realestatecompleted_copy) *b_colleague_realestatecompleted_copy = *b_colleague_realestatecompleted;
    }
    colleague_request_v2_t *result = colleague_request_v2_create_internal (
        pki_colleague_id_copy,
        fki_user_id_copy,
        fki_user_id_colleague_copy,
        b_colleague_ezsignemail_copy,
        b_colleague_financial_copy,
        b_colleague_usecloneemail_copy,
        b_colleague_attachment_copy,
        b_colleague_canafe_copy,
        b_colleague_permission_copy,
        b_colleague_realestatecompleted_copy,
        dt_colleague_from,
        dt_colleague_to,
        e_colleague_ezsign,
        e_colleague_realestateinprogress
        );
    if (!result) {
        free(pki_colleague_id_copy);
        free(fki_user_id_copy);
        free(fki_user_id_colleague_copy);
        free(b_colleague_ezsignemail_copy);
        free(b_colleague_financial_copy);
        free(b_colleague_usecloneemail_copy);
        free(b_colleague_attachment_copy);
        free(b_colleague_canafe_copy);
        free(b_colleague_permission_copy);
        free(b_colleague_realestatecompleted_copy);
    }
    return result;
}

void colleague_request_v2_free(colleague_request_v2_t *colleague_request_v2) {
    if(NULL == colleague_request_v2){
        return ;
    }
    if(colleague_request_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "colleague_request_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (colleague_request_v2->pki_colleague_id) {
        free(colleague_request_v2->pki_colleague_id);
        colleague_request_v2->pki_colleague_id = NULL;
    }
    if (colleague_request_v2->fki_user_id) {
        free(colleague_request_v2->fki_user_id);
        colleague_request_v2->fki_user_id = NULL;
    }
    if (colleague_request_v2->fki_user_id_colleague) {
        free(colleague_request_v2->fki_user_id_colleague);
        colleague_request_v2->fki_user_id_colleague = NULL;
    }
    if (colleague_request_v2->b_colleague_ezsignemail) {
        free(colleague_request_v2->b_colleague_ezsignemail);
        colleague_request_v2->b_colleague_ezsignemail = NULL;
    }
    if (colleague_request_v2->b_colleague_financial) {
        free(colleague_request_v2->b_colleague_financial);
        colleague_request_v2->b_colleague_financial = NULL;
    }
    if (colleague_request_v2->b_colleague_usecloneemail) {
        free(colleague_request_v2->b_colleague_usecloneemail);
        colleague_request_v2->b_colleague_usecloneemail = NULL;
    }
    if (colleague_request_v2->b_colleague_attachment) {
        free(colleague_request_v2->b_colleague_attachment);
        colleague_request_v2->b_colleague_attachment = NULL;
    }
    if (colleague_request_v2->b_colleague_canafe) {
        free(colleague_request_v2->b_colleague_canafe);
        colleague_request_v2->b_colleague_canafe = NULL;
    }
    if (colleague_request_v2->b_colleague_permission) {
        free(colleague_request_v2->b_colleague_permission);
        colleague_request_v2->b_colleague_permission = NULL;
    }
    if (colleague_request_v2->b_colleague_realestatecompleted) {
        free(colleague_request_v2->b_colleague_realestatecompleted);
        colleague_request_v2->b_colleague_realestatecompleted = NULL;
    }
    if (colleague_request_v2->dt_colleague_from) {
        free(colleague_request_v2->dt_colleague_from);
        colleague_request_v2->dt_colleague_from = NULL;
    }
    if (colleague_request_v2->dt_colleague_to) {
        free(colleague_request_v2->dt_colleague_to);
        colleague_request_v2->dt_colleague_to = NULL;
    }
    free(colleague_request_v2);
}

cJSON *colleague_request_v2_convertToJSON(colleague_request_v2_t *colleague_request_v2) {
    cJSON *item = cJSON_CreateObject();

    // colleague_request_v2->pki_colleague_id
    if(colleague_request_v2->pki_colleague_id) {
    if(cJSON_AddNumberToObject(item, "pkiColleagueID", *colleague_request_v2->pki_colleague_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // colleague_request_v2->fki_user_id
    if (!colleague_request_v2->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", *colleague_request_v2->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // colleague_request_v2->fki_user_id_colleague
    if (!colleague_request_v2->fki_user_id_colleague) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDColleague", *colleague_request_v2->fki_user_id_colleague) == NULL) {
    goto fail; //Numeric
    }


    // colleague_request_v2->b_colleague_ezsignemail
    if (!colleague_request_v2->b_colleague_ezsignemail) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueEzsignemail", *colleague_request_v2->b_colleague_ezsignemail) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_financial
    if (!colleague_request_v2->b_colleague_financial) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueFinancial", *colleague_request_v2->b_colleague_financial) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_usecloneemail
    if (!colleague_request_v2->b_colleague_usecloneemail) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueUsecloneemail", *colleague_request_v2->b_colleague_usecloneemail) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_attachment
    if (!colleague_request_v2->b_colleague_attachment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueAttachment", *colleague_request_v2->b_colleague_attachment) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_canafe
    if (!colleague_request_v2->b_colleague_canafe) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueCanafe", *colleague_request_v2->b_colleague_canafe) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_permission
    if (!colleague_request_v2->b_colleague_permission) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleaguePermission", *colleague_request_v2->b_colleague_permission) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->b_colleague_realestatecompleted
    if (!colleague_request_v2->b_colleague_realestatecompleted) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueRealestatecompleted", *colleague_request_v2->b_colleague_realestatecompleted) == NULL) {
    goto fail; //Bool
    }


    // colleague_request_v2->dt_colleague_from
    if(colleague_request_v2->dt_colleague_from) {
    if(cJSON_AddStringToObject(item, "dtColleagueFrom", colleague_request_v2->dt_colleague_from) == NULL) {
    goto fail; //String
    }
    }


    // colleague_request_v2->dt_colleague_to
    if(colleague_request_v2->dt_colleague_to) {
    if(cJSON_AddStringToObject(item, "dtColleagueTo", colleague_request_v2->dt_colleague_to) == NULL) {
    goto fail; //String
    }
    }


    // colleague_request_v2->e_colleague_ezsign
    if (ezmax_api_definition__full_field_e_colleague_ezsign__NULL == colleague_request_v2->e_colleague_ezsign) {
        goto fail;
    }
    cJSON *e_colleague_ezsign_local_JSON = field_e_colleague_ezsign_convertToJSON(colleague_request_v2->e_colleague_ezsign);
    if(e_colleague_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eColleagueEzsign", e_colleague_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // colleague_request_v2->e_colleague_realestateinprogress
    if (ezmax_api_definition__full_field_e_colleague_realestateinprogess__NULL == colleague_request_v2->e_colleague_realestateinprogress) {
        goto fail;
    }
    cJSON *e_colleague_realestateinprogress_local_JSON = field_e_colleague_realestateinprogess_convertToJSON(colleague_request_v2->e_colleague_realestateinprogress);
    if(e_colleague_realestateinprogress_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eColleagueRealestateinprogress", e_colleague_realestateinprogress_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

colleague_request_v2_t *colleague_request_v2_parseFromJSON(cJSON *colleague_request_v2JSON){

    colleague_request_v2_t *colleague_request_v2_local_var = NULL;

    // define the local variable for colleague_request_v2->pki_colleague_id
    int *pki_colleague_id_local_var = NULL;

    // define the local variable for colleague_request_v2->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for colleague_request_v2->fki_user_id_colleague
    int *fki_user_id_colleague_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_ezsignemail
    int *b_colleague_ezsignemail_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_financial
    int *b_colleague_financial_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_usecloneemail
    int *b_colleague_usecloneemail_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_attachment
    int *b_colleague_attachment_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_canafe
    int *b_colleague_canafe_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_permission
    int *b_colleague_permission_local_var = NULL;

    // define the local variable for colleague_request_v2->b_colleague_realestatecompleted
    int *b_colleague_realestatecompleted_local_var = NULL;

    char *dt_colleague_from_local_str = NULL;

    char *dt_colleague_to_local_str = NULL;

    // define the local variable for colleague_request_v2->e_colleague_ezsign
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign_local_nonprim = 0;

    // define the local variable for colleague_request_v2->e_colleague_realestateinprogress
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress_local_nonprim = 0;

    // colleague_request_v2->pki_colleague_id
    cJSON *pki_colleague_id = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "pkiColleagueID");
    if (cJSON_IsNull(pki_colleague_id)) {
        pki_colleague_id = NULL;
    }
    if (pki_colleague_id) { 
    if(!cJSON_IsNumber(pki_colleague_id))
    {
    goto end; //Numeric
    }
    pki_colleague_id_local_var = malloc(sizeof(int));
    if(!pki_colleague_id_local_var)
    {
        goto end;
    }
    *pki_colleague_id_local_var = pki_colleague_id->valuedouble;
    }

    // colleague_request_v2->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;

    // colleague_request_v2->fki_user_id_colleague
    cJSON *fki_user_id_colleague = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "fkiUserIDColleague");
    if (cJSON_IsNull(fki_user_id_colleague)) {
        fki_user_id_colleague = NULL;
    }
    if (!fki_user_id_colleague) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_colleague))
    {
    goto end; //Numeric
    }
    fki_user_id_colleague_local_var = malloc(sizeof(int));
    if(!fki_user_id_colleague_local_var)
    {
        goto end;
    }
    *fki_user_id_colleague_local_var = fki_user_id_colleague->valuedouble;

    // colleague_request_v2->b_colleague_ezsignemail
    cJSON *b_colleague_ezsignemail = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueEzsignemail");
    if (cJSON_IsNull(b_colleague_ezsignemail)) {
        b_colleague_ezsignemail = NULL;
    }
    if (!b_colleague_ezsignemail) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_ezsignemail))
    {
    goto end; //Bool
    }
    b_colleague_ezsignemail_local_var = malloc(sizeof(int));
    if(!b_colleague_ezsignemail_local_var)
    {
        goto end;
    }
    *b_colleague_ezsignemail_local_var = b_colleague_ezsignemail->valueint;

    // colleague_request_v2->b_colleague_financial
    cJSON *b_colleague_financial = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueFinancial");
    if (cJSON_IsNull(b_colleague_financial)) {
        b_colleague_financial = NULL;
    }
    if (!b_colleague_financial) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_financial))
    {
    goto end; //Bool
    }
    b_colleague_financial_local_var = malloc(sizeof(int));
    if(!b_colleague_financial_local_var)
    {
        goto end;
    }
    *b_colleague_financial_local_var = b_colleague_financial->valueint;

    // colleague_request_v2->b_colleague_usecloneemail
    cJSON *b_colleague_usecloneemail = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueUsecloneemail");
    if (cJSON_IsNull(b_colleague_usecloneemail)) {
        b_colleague_usecloneemail = NULL;
    }
    if (!b_colleague_usecloneemail) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_usecloneemail))
    {
    goto end; //Bool
    }
    b_colleague_usecloneemail_local_var = malloc(sizeof(int));
    if(!b_colleague_usecloneemail_local_var)
    {
        goto end;
    }
    *b_colleague_usecloneemail_local_var = b_colleague_usecloneemail->valueint;

    // colleague_request_v2->b_colleague_attachment
    cJSON *b_colleague_attachment = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueAttachment");
    if (cJSON_IsNull(b_colleague_attachment)) {
        b_colleague_attachment = NULL;
    }
    if (!b_colleague_attachment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_attachment))
    {
    goto end; //Bool
    }
    b_colleague_attachment_local_var = malloc(sizeof(int));
    if(!b_colleague_attachment_local_var)
    {
        goto end;
    }
    *b_colleague_attachment_local_var = b_colleague_attachment->valueint;

    // colleague_request_v2->b_colleague_canafe
    cJSON *b_colleague_canafe = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueCanafe");
    if (cJSON_IsNull(b_colleague_canafe)) {
        b_colleague_canafe = NULL;
    }
    if (!b_colleague_canafe) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_canafe))
    {
    goto end; //Bool
    }
    b_colleague_canafe_local_var = malloc(sizeof(int));
    if(!b_colleague_canafe_local_var)
    {
        goto end;
    }
    *b_colleague_canafe_local_var = b_colleague_canafe->valueint;

    // colleague_request_v2->b_colleague_permission
    cJSON *b_colleague_permission = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleaguePermission");
    if (cJSON_IsNull(b_colleague_permission)) {
        b_colleague_permission = NULL;
    }
    if (!b_colleague_permission) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_permission))
    {
    goto end; //Bool
    }
    b_colleague_permission_local_var = malloc(sizeof(int));
    if(!b_colleague_permission_local_var)
    {
        goto end;
    }
    *b_colleague_permission_local_var = b_colleague_permission->valueint;

    // colleague_request_v2->b_colleague_realestatecompleted
    cJSON *b_colleague_realestatecompleted = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "bColleagueRealestatecompleted");
    if (cJSON_IsNull(b_colleague_realestatecompleted)) {
        b_colleague_realestatecompleted = NULL;
    }
    if (!b_colleague_realestatecompleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_colleague_realestatecompleted))
    {
    goto end; //Bool
    }
    b_colleague_realestatecompleted_local_var = malloc(sizeof(int));
    if(!b_colleague_realestatecompleted_local_var)
    {
        goto end;
    }
    *b_colleague_realestatecompleted_local_var = b_colleague_realestatecompleted->valueint;

    // colleague_request_v2->dt_colleague_from
    cJSON *dt_colleague_from = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "dtColleagueFrom");
    if (cJSON_IsNull(dt_colleague_from)) {
        dt_colleague_from = NULL;
    }
    if (dt_colleague_from) { 
    if(!cJSON_IsString(dt_colleague_from) && !cJSON_IsNull(dt_colleague_from))
    {
    goto end; //String
    }
    }

    // colleague_request_v2->dt_colleague_to
    cJSON *dt_colleague_to = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "dtColleagueTo");
    if (cJSON_IsNull(dt_colleague_to)) {
        dt_colleague_to = NULL;
    }
    if (dt_colleague_to) { 
    if(!cJSON_IsString(dt_colleague_to) && !cJSON_IsNull(dt_colleague_to))
    {
    goto end; //String
    }
    }

    // colleague_request_v2->e_colleague_ezsign
    cJSON *e_colleague_ezsign = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "eColleagueEzsign");
    if (cJSON_IsNull(e_colleague_ezsign)) {
        e_colleague_ezsign = NULL;
    }
    if (!e_colleague_ezsign) {
        goto end;
    }

    
    e_colleague_ezsign_local_nonprim = field_e_colleague_ezsign_parseFromJSON(e_colleague_ezsign); //custom

    // colleague_request_v2->e_colleague_realestateinprogress
    cJSON *e_colleague_realestateinprogress = cJSON_GetObjectItemCaseSensitive(colleague_request_v2JSON, "eColleagueRealestateinprogress");
    if (cJSON_IsNull(e_colleague_realestateinprogress)) {
        e_colleague_realestateinprogress = NULL;
    }
    if (!e_colleague_realestateinprogress) {
        goto end;
    }

    
    e_colleague_realestateinprogress_local_nonprim = field_e_colleague_realestateinprogess_parseFromJSON(e_colleague_realestateinprogress); //custom


    if (dt_colleague_from && !cJSON_IsNull(dt_colleague_from)) dt_colleague_from_local_str = strdup(dt_colleague_from->valuestring);
    if (dt_colleague_to && !cJSON_IsNull(dt_colleague_to)) dt_colleague_to_local_str = strdup(dt_colleague_to->valuestring);

    colleague_request_v2_local_var = colleague_request_v2_create_internal (
        pki_colleague_id_local_var,
        fki_user_id_local_var,
        fki_user_id_colleague_local_var,
        b_colleague_ezsignemail_local_var,
        b_colleague_financial_local_var,
        b_colleague_usecloneemail_local_var,
        b_colleague_attachment_local_var,
        b_colleague_canafe_local_var,
        b_colleague_permission_local_var,
        b_colleague_realestatecompleted_local_var,
        dt_colleague_from_local_str,
        dt_colleague_to_local_str,
        e_colleague_ezsign_local_nonprim,
        e_colleague_realestateinprogress_local_nonprim
        );

    if (!colleague_request_v2_local_var) {
        goto end;
    }

    return colleague_request_v2_local_var;
end:
    if (pki_colleague_id_local_var) {
        free(pki_colleague_id_local_var);
        pki_colleague_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_user_id_colleague_local_var) {
        free(fki_user_id_colleague_local_var);
        fki_user_id_colleague_local_var = NULL;
    }
    if (b_colleague_ezsignemail_local_var) {
        free(b_colleague_ezsignemail_local_var);
        b_colleague_ezsignemail_local_var = NULL;
    }
    if (b_colleague_financial_local_var) {
        free(b_colleague_financial_local_var);
        b_colleague_financial_local_var = NULL;
    }
    if (b_colleague_usecloneemail_local_var) {
        free(b_colleague_usecloneemail_local_var);
        b_colleague_usecloneemail_local_var = NULL;
    }
    if (b_colleague_attachment_local_var) {
        free(b_colleague_attachment_local_var);
        b_colleague_attachment_local_var = NULL;
    }
    if (b_colleague_canafe_local_var) {
        free(b_colleague_canafe_local_var);
        b_colleague_canafe_local_var = NULL;
    }
    if (b_colleague_permission_local_var) {
        free(b_colleague_permission_local_var);
        b_colleague_permission_local_var = NULL;
    }
    if (b_colleague_realestatecompleted_local_var) {
        free(b_colleague_realestatecompleted_local_var);
        b_colleague_realestatecompleted_local_var = NULL;
    }
    if (dt_colleague_from_local_str) {
        free(dt_colleague_from_local_str);
        dt_colleague_from_local_str = NULL;
    }
    if (dt_colleague_to_local_str) {
        free(dt_colleague_to_local_str);
        dt_colleague_to_local_str = NULL;
    }
    if (e_colleague_ezsign_local_nonprim) {
        e_colleague_ezsign_local_nonprim = 0;
    }
    if (e_colleague_realestateinprogress_local_nonprim) {
        e_colleague_realestateinprogress_local_nonprim = 0;
    }
    return NULL;

}
