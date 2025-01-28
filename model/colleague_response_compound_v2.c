#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "colleague_response_compound_v2.h"



static colleague_response_compound_v2_t *colleague_response_compound_v2_create_internal(
    int pki_colleague_id,
    int fki_user_id,
    int fki_user_id_colleague,
    int b_colleague_ezsignemail,
    int b_colleague_financial,
    int b_colleague_usecloneemail,
    int b_colleague_attachment,
    int b_colleague_canafe,
    int b_colleague_permission,
    int b_colleague_realestatecompleted,
    char *dt_colleague_from,
    char *dt_colleague_to,
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign,
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress,
    custom_user_name_response_t *obj_user_name,
    common_audit_t *obj_audit
    ) {
    colleague_response_compound_v2_t *colleague_response_compound_v2_local_var = malloc(sizeof(colleague_response_compound_v2_t));
    if (!colleague_response_compound_v2_local_var) {
        return NULL;
    }
    colleague_response_compound_v2_local_var->pki_colleague_id = pki_colleague_id;
    colleague_response_compound_v2_local_var->fki_user_id = fki_user_id;
    colleague_response_compound_v2_local_var->fki_user_id_colleague = fki_user_id_colleague;
    colleague_response_compound_v2_local_var->b_colleague_ezsignemail = b_colleague_ezsignemail;
    colleague_response_compound_v2_local_var->b_colleague_financial = b_colleague_financial;
    colleague_response_compound_v2_local_var->b_colleague_usecloneemail = b_colleague_usecloneemail;
    colleague_response_compound_v2_local_var->b_colleague_attachment = b_colleague_attachment;
    colleague_response_compound_v2_local_var->b_colleague_canafe = b_colleague_canafe;
    colleague_response_compound_v2_local_var->b_colleague_permission = b_colleague_permission;
    colleague_response_compound_v2_local_var->b_colleague_realestatecompleted = b_colleague_realestatecompleted;
    colleague_response_compound_v2_local_var->dt_colleague_from = dt_colleague_from;
    colleague_response_compound_v2_local_var->dt_colleague_to = dt_colleague_to;
    colleague_response_compound_v2_local_var->e_colleague_ezsign = e_colleague_ezsign;
    colleague_response_compound_v2_local_var->e_colleague_realestateinprogress = e_colleague_realestateinprogress;
    colleague_response_compound_v2_local_var->obj_user_name = obj_user_name;
    colleague_response_compound_v2_local_var->obj_audit = obj_audit;

    colleague_response_compound_v2_local_var->_library_owned = 1;
    return colleague_response_compound_v2_local_var;
}

__attribute__((deprecated)) colleague_response_compound_v2_t *colleague_response_compound_v2_create(
    int pki_colleague_id,
    int fki_user_id,
    int fki_user_id_colleague,
    int b_colleague_ezsignemail,
    int b_colleague_financial,
    int b_colleague_usecloneemail,
    int b_colleague_attachment,
    int b_colleague_canafe,
    int b_colleague_permission,
    int b_colleague_realestatecompleted,
    char *dt_colleague_from,
    char *dt_colleague_to,
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign,
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress,
    custom_user_name_response_t *obj_user_name,
    common_audit_t *obj_audit
    ) {
    return colleague_response_compound_v2_create_internal (
        pki_colleague_id,
        fki_user_id,
        fki_user_id_colleague,
        b_colleague_ezsignemail,
        b_colleague_financial,
        b_colleague_usecloneemail,
        b_colleague_attachment,
        b_colleague_canafe,
        b_colleague_permission,
        b_colleague_realestatecompleted,
        dt_colleague_from,
        dt_colleague_to,
        e_colleague_ezsign,
        e_colleague_realestateinprogress,
        obj_user_name,
        obj_audit
        );
}

void colleague_response_compound_v2_free(colleague_response_compound_v2_t *colleague_response_compound_v2) {
    if(NULL == colleague_response_compound_v2){
        return ;
    }
    if(colleague_response_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "colleague_response_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (colleague_response_compound_v2->dt_colleague_from) {
        free(colleague_response_compound_v2->dt_colleague_from);
        colleague_response_compound_v2->dt_colleague_from = NULL;
    }
    if (colleague_response_compound_v2->dt_colleague_to) {
        free(colleague_response_compound_v2->dt_colleague_to);
        colleague_response_compound_v2->dt_colleague_to = NULL;
    }
    if (colleague_response_compound_v2->obj_user_name) {
        custom_user_name_response_free(colleague_response_compound_v2->obj_user_name);
        colleague_response_compound_v2->obj_user_name = NULL;
    }
    if (colleague_response_compound_v2->obj_audit) {
        common_audit_free(colleague_response_compound_v2->obj_audit);
        colleague_response_compound_v2->obj_audit = NULL;
    }
    free(colleague_response_compound_v2);
}

cJSON *colleague_response_compound_v2_convertToJSON(colleague_response_compound_v2_t *colleague_response_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // colleague_response_compound_v2->pki_colleague_id
    if (!colleague_response_compound_v2->pki_colleague_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiColleagueID", colleague_response_compound_v2->pki_colleague_id) == NULL) {
    goto fail; //Numeric
    }


    // colleague_response_compound_v2->fki_user_id
    if (!colleague_response_compound_v2->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", colleague_response_compound_v2->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // colleague_response_compound_v2->fki_user_id_colleague
    if (!colleague_response_compound_v2->fki_user_id_colleague) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDColleague", colleague_response_compound_v2->fki_user_id_colleague) == NULL) {
    goto fail; //Numeric
    }


    // colleague_response_compound_v2->b_colleague_ezsignemail
    if (!colleague_response_compound_v2->b_colleague_ezsignemail) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueEzsignemail", colleague_response_compound_v2->b_colleague_ezsignemail) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_financial
    if (!colleague_response_compound_v2->b_colleague_financial) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueFinancial", colleague_response_compound_v2->b_colleague_financial) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_usecloneemail
    if (!colleague_response_compound_v2->b_colleague_usecloneemail) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueUsecloneemail", colleague_response_compound_v2->b_colleague_usecloneemail) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_attachment
    if (!colleague_response_compound_v2->b_colleague_attachment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueAttachment", colleague_response_compound_v2->b_colleague_attachment) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_canafe
    if (!colleague_response_compound_v2->b_colleague_canafe) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueCanafe", colleague_response_compound_v2->b_colleague_canafe) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_permission
    if (!colleague_response_compound_v2->b_colleague_permission) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleaguePermission", colleague_response_compound_v2->b_colleague_permission) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->b_colleague_realestatecompleted
    if (!colleague_response_compound_v2->b_colleague_realestatecompleted) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bColleagueRealestatecompleted", colleague_response_compound_v2->b_colleague_realestatecompleted) == NULL) {
    goto fail; //Bool
    }


    // colleague_response_compound_v2->dt_colleague_from
    if(colleague_response_compound_v2->dt_colleague_from) {
    if(cJSON_AddStringToObject(item, "dtColleagueFrom", colleague_response_compound_v2->dt_colleague_from) == NULL) {
    goto fail; //String
    }
    }


    // colleague_response_compound_v2->dt_colleague_to
    if(colleague_response_compound_v2->dt_colleague_to) {
    if(cJSON_AddStringToObject(item, "dtColleagueTo", colleague_response_compound_v2->dt_colleague_to) == NULL) {
    goto fail; //String
    }
    }


    // colleague_response_compound_v2->e_colleague_ezsign
    if (ezmax_api_definition__full_field_e_colleague_ezsign__NULL == colleague_response_compound_v2->e_colleague_ezsign) {
        goto fail;
    }
    cJSON *e_colleague_ezsign_local_JSON = field_e_colleague_ezsign_convertToJSON(colleague_response_compound_v2->e_colleague_ezsign);
    if(e_colleague_ezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eColleagueEzsign", e_colleague_ezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // colleague_response_compound_v2->e_colleague_realestateinprogress
    if (ezmax_api_definition__full_field_e_colleague_realestateinprogess__NULL == colleague_response_compound_v2->e_colleague_realestateinprogress) {
        goto fail;
    }
    cJSON *e_colleague_realestateinprogress_local_JSON = field_e_colleague_realestateinprogess_convertToJSON(colleague_response_compound_v2->e_colleague_realestateinprogress);
    if(e_colleague_realestateinprogress_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eColleagueRealestateinprogress", e_colleague_realestateinprogress_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // colleague_response_compound_v2->obj_user_name
    if (!colleague_response_compound_v2->obj_user_name) {
        goto fail;
    }
    cJSON *obj_user_name_local_JSON = custom_user_name_response_convertToJSON(colleague_response_compound_v2->obj_user_name);
    if(obj_user_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserName", obj_user_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // colleague_response_compound_v2->obj_audit
    if (!colleague_response_compound_v2->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(colleague_response_compound_v2->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
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

colleague_response_compound_v2_t *colleague_response_compound_v2_parseFromJSON(cJSON *colleague_response_compound_v2JSON){

    colleague_response_compound_v2_t *colleague_response_compound_v2_local_var = NULL;

    // define the local variable for colleague_response_compound_v2->e_colleague_ezsign
    ezmax_api_definition__full_field_e_colleague_ezsign__e e_colleague_ezsign_local_nonprim = 0;

    // define the local variable for colleague_response_compound_v2->e_colleague_realestateinprogress
    ezmax_api_definition__full_field_e_colleague_realestateinprogess__e e_colleague_realestateinprogress_local_nonprim = 0;

    // define the local variable for colleague_response_compound_v2->obj_user_name
    custom_user_name_response_t *obj_user_name_local_nonprim = NULL;

    // define the local variable for colleague_response_compound_v2->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // colleague_response_compound_v2->pki_colleague_id
    cJSON *pki_colleague_id = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "pkiColleagueID");
    if (cJSON_IsNull(pki_colleague_id)) {
        pki_colleague_id = NULL;
    }
    if (!pki_colleague_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_colleague_id))
    {
    goto end; //Numeric
    }

    // colleague_response_compound_v2->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "fkiUserID");
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

    // colleague_response_compound_v2->fki_user_id_colleague
    cJSON *fki_user_id_colleague = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "fkiUserIDColleague");
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

    // colleague_response_compound_v2->b_colleague_ezsignemail
    cJSON *b_colleague_ezsignemail = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueEzsignemail");
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

    // colleague_response_compound_v2->b_colleague_financial
    cJSON *b_colleague_financial = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueFinancial");
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

    // colleague_response_compound_v2->b_colleague_usecloneemail
    cJSON *b_colleague_usecloneemail = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueUsecloneemail");
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

    // colleague_response_compound_v2->b_colleague_attachment
    cJSON *b_colleague_attachment = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueAttachment");
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

    // colleague_response_compound_v2->b_colleague_canafe
    cJSON *b_colleague_canafe = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueCanafe");
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

    // colleague_response_compound_v2->b_colleague_permission
    cJSON *b_colleague_permission = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleaguePermission");
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

    // colleague_response_compound_v2->b_colleague_realestatecompleted
    cJSON *b_colleague_realestatecompleted = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "bColleagueRealestatecompleted");
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

    // colleague_response_compound_v2->dt_colleague_from
    cJSON *dt_colleague_from = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "dtColleagueFrom");
    if (cJSON_IsNull(dt_colleague_from)) {
        dt_colleague_from = NULL;
    }
    if (dt_colleague_from) { 
    if(!cJSON_IsString(dt_colleague_from) && !cJSON_IsNull(dt_colleague_from))
    {
    goto end; //String
    }
    }

    // colleague_response_compound_v2->dt_colleague_to
    cJSON *dt_colleague_to = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "dtColleagueTo");
    if (cJSON_IsNull(dt_colleague_to)) {
        dt_colleague_to = NULL;
    }
    if (dt_colleague_to) { 
    if(!cJSON_IsString(dt_colleague_to) && !cJSON_IsNull(dt_colleague_to))
    {
    goto end; //String
    }
    }

    // colleague_response_compound_v2->e_colleague_ezsign
    cJSON *e_colleague_ezsign = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "eColleagueEzsign");
    if (cJSON_IsNull(e_colleague_ezsign)) {
        e_colleague_ezsign = NULL;
    }
    if (!e_colleague_ezsign) {
        goto end;
    }

    
    e_colleague_ezsign_local_nonprim = field_e_colleague_ezsign_parseFromJSON(e_colleague_ezsign); //custom

    // colleague_response_compound_v2->e_colleague_realestateinprogress
    cJSON *e_colleague_realestateinprogress = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "eColleagueRealestateinprogress");
    if (cJSON_IsNull(e_colleague_realestateinprogress)) {
        e_colleague_realestateinprogress = NULL;
    }
    if (!e_colleague_realestateinprogress) {
        goto end;
    }

    
    e_colleague_realestateinprogress_local_nonprim = field_e_colleague_realestateinprogess_parseFromJSON(e_colleague_realestateinprogress); //custom

    // colleague_response_compound_v2->obj_user_name
    cJSON *obj_user_name = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "objUserName");
    if (cJSON_IsNull(obj_user_name)) {
        obj_user_name = NULL;
    }
    if (!obj_user_name) {
        goto end;
    }

    
    obj_user_name_local_nonprim = custom_user_name_response_parseFromJSON(obj_user_name); //nonprimitive

    // colleague_response_compound_v2->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(colleague_response_compound_v2JSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    colleague_response_compound_v2_local_var = colleague_response_compound_v2_create_internal (
        pki_colleague_id->valuedouble,
        fki_user_id->valuedouble,
        fki_user_id_colleague->valuedouble,
        b_colleague_ezsignemail->valueint,
        b_colleague_financial->valueint,
        b_colleague_usecloneemail->valueint,
        b_colleague_attachment->valueint,
        b_colleague_canafe->valueint,
        b_colleague_permission->valueint,
        b_colleague_realestatecompleted->valueint,
        dt_colleague_from && !cJSON_IsNull(dt_colleague_from) ? strdup(dt_colleague_from->valuestring) : NULL,
        dt_colleague_to && !cJSON_IsNull(dt_colleague_to) ? strdup(dt_colleague_to->valuestring) : NULL,
        e_colleague_ezsign_local_nonprim,
        e_colleague_realestateinprogress_local_nonprim,
        obj_user_name_local_nonprim,
        obj_audit_local_nonprim
        );

    return colleague_response_compound_v2_local_var;
end:
    if (e_colleague_ezsign_local_nonprim) {
        e_colleague_ezsign_local_nonprim = 0;
    }
    if (e_colleague_realestateinprogress_local_nonprim) {
        e_colleague_realestateinprogress_local_nonprim = 0;
    }
    if (obj_user_name_local_nonprim) {
        custom_user_name_response_free(obj_user_name_local_nonprim);
        obj_user_name_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
