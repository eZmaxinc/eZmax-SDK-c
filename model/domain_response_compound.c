#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_response_compound.h"



static domain_response_compound_t *domain_response_compound_create_internal(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_validdkim,
    int b_domain_validmailfrom,
    int b_domain_validcustomer,
    common_audit_t *obj_audit,
    list_t *a_obj_dnsrecord
    ) {
    domain_response_compound_t *domain_response_compound_local_var = malloc(sizeof(domain_response_compound_t));
    if (!domain_response_compound_local_var) {
        return NULL;
    }
    domain_response_compound_local_var->pki_domain_id = pki_domain_id;
    domain_response_compound_local_var->s_domain_name = s_domain_name;
    domain_response_compound_local_var->b_domain_validdkim = b_domain_validdkim;
    domain_response_compound_local_var->b_domain_validmailfrom = b_domain_validmailfrom;
    domain_response_compound_local_var->b_domain_validcustomer = b_domain_validcustomer;
    domain_response_compound_local_var->obj_audit = obj_audit;
    domain_response_compound_local_var->a_obj_dnsrecord = a_obj_dnsrecord;

    domain_response_compound_local_var->_library_owned = 1;
    return domain_response_compound_local_var;
}

__attribute__((deprecated)) domain_response_compound_t *domain_response_compound_create(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_validdkim,
    int b_domain_validmailfrom,
    int b_domain_validcustomer,
    common_audit_t *obj_audit,
    list_t *a_obj_dnsrecord
    ) {
    return domain_response_compound_create_internal (
        pki_domain_id,
        s_domain_name,
        b_domain_validdkim,
        b_domain_validmailfrom,
        b_domain_validcustomer,
        obj_audit,
        a_obj_dnsrecord
        );
}

void domain_response_compound_free(domain_response_compound_t *domain_response_compound) {
    if(NULL == domain_response_compound){
        return ;
    }
    if(domain_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_response_compound->s_domain_name) {
        free(domain_response_compound->s_domain_name);
        domain_response_compound->s_domain_name = NULL;
    }
    if (domain_response_compound->obj_audit) {
        common_audit_free(domain_response_compound->obj_audit);
        domain_response_compound->obj_audit = NULL;
    }
    if (domain_response_compound->a_obj_dnsrecord) {
        list_ForEach(listEntry, domain_response_compound->a_obj_dnsrecord) {
            custom_dnsrecord_response_free(listEntry->data);
        }
        list_freeList(domain_response_compound->a_obj_dnsrecord);
        domain_response_compound->a_obj_dnsrecord = NULL;
    }
    free(domain_response_compound);
}

cJSON *domain_response_compound_convertToJSON(domain_response_compound_t *domain_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // domain_response_compound->pki_domain_id
    if (!domain_response_compound->pki_domain_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDomainID", domain_response_compound->pki_domain_id) == NULL) {
    goto fail; //Numeric
    }


    // domain_response_compound->s_domain_name
    if (!domain_response_compound->s_domain_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDomainName", domain_response_compound->s_domain_name) == NULL) {
    goto fail; //String
    }


    // domain_response_compound->b_domain_validdkim
    if (!domain_response_compound->b_domain_validdkim) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValiddkim", domain_response_compound->b_domain_validdkim) == NULL) {
    goto fail; //Bool
    }


    // domain_response_compound->b_domain_validmailfrom
    if (!domain_response_compound->b_domain_validmailfrom) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValidmailfrom", domain_response_compound->b_domain_validmailfrom) == NULL) {
    goto fail; //Bool
    }


    // domain_response_compound->b_domain_validcustomer
    if (!domain_response_compound->b_domain_validcustomer) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValidcustomer", domain_response_compound->b_domain_validcustomer) == NULL) {
    goto fail; //Bool
    }


    // domain_response_compound->obj_audit
    if (!domain_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(domain_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // domain_response_compound->a_obj_dnsrecord
    if (!domain_response_compound->a_obj_dnsrecord) {
        goto fail;
    }
    cJSON *a_obj_dnsrecord = cJSON_AddArrayToObject(item, "a_objDnsrecord");
    if(a_obj_dnsrecord == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dnsrecordListEntry;
    if (domain_response_compound->a_obj_dnsrecord) {
    list_ForEach(a_obj_dnsrecordListEntry, domain_response_compound->a_obj_dnsrecord) {
    cJSON *itemLocal = custom_dnsrecord_response_convertToJSON(a_obj_dnsrecordListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dnsrecord, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_response_compound_t *domain_response_compound_parseFromJSON(cJSON *domain_response_compoundJSON){

    domain_response_compound_t *domain_response_compound_local_var = NULL;

    // define the local variable for domain_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for domain_response_compound->a_obj_dnsrecord
    list_t *a_obj_dnsrecordList = NULL;

    // domain_response_compound->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "pkiDomainID");
    if (cJSON_IsNull(pki_domain_id)) {
        pki_domain_id = NULL;
    }
    if (!pki_domain_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_domain_id))
    {
    goto end; //Numeric
    }

    // domain_response_compound->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "sDomainName");
    if (cJSON_IsNull(s_domain_name)) {
        s_domain_name = NULL;
    }
    if (!s_domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_domain_name))
    {
    goto end; //String
    }

    // domain_response_compound->b_domain_validdkim
    cJSON *b_domain_validdkim = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "bDomainValiddkim");
    if (cJSON_IsNull(b_domain_validdkim)) {
        b_domain_validdkim = NULL;
    }
    if (!b_domain_validdkim) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validdkim))
    {
    goto end; //Bool
    }

    // domain_response_compound->b_domain_validmailfrom
    cJSON *b_domain_validmailfrom = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "bDomainValidmailfrom");
    if (cJSON_IsNull(b_domain_validmailfrom)) {
        b_domain_validmailfrom = NULL;
    }
    if (!b_domain_validmailfrom) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validmailfrom))
    {
    goto end; //Bool
    }

    // domain_response_compound->b_domain_validcustomer
    cJSON *b_domain_validcustomer = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "bDomainValidcustomer");
    if (cJSON_IsNull(b_domain_validcustomer)) {
        b_domain_validcustomer = NULL;
    }
    if (!b_domain_validcustomer) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validcustomer))
    {
    goto end; //Bool
    }

    // domain_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // domain_response_compound->a_obj_dnsrecord
    cJSON *a_obj_dnsrecord = cJSON_GetObjectItemCaseSensitive(domain_response_compoundJSON, "a_objDnsrecord");
    if (cJSON_IsNull(a_obj_dnsrecord)) {
        a_obj_dnsrecord = NULL;
    }
    if (!a_obj_dnsrecord) {
        goto end;
    }

    
    cJSON *a_obj_dnsrecord_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_dnsrecord)){
        goto end; //nonprimitive container
    }

    a_obj_dnsrecordList = list_createList();

    cJSON_ArrayForEach(a_obj_dnsrecord_local_nonprimitive,a_obj_dnsrecord )
    {
        if(!cJSON_IsObject(a_obj_dnsrecord_local_nonprimitive)){
            goto end;
        }
        custom_dnsrecord_response_t *a_obj_dnsrecordItem = custom_dnsrecord_response_parseFromJSON(a_obj_dnsrecord_local_nonprimitive);

        list_addElement(a_obj_dnsrecordList, a_obj_dnsrecordItem);
    }


    domain_response_compound_local_var = domain_response_compound_create_internal (
        pki_domain_id->valuedouble,
        strdup(s_domain_name->valuestring),
        b_domain_validdkim->valueint,
        b_domain_validmailfrom->valueint,
        b_domain_validcustomer->valueint,
        obj_audit_local_nonprim,
        a_obj_dnsrecordList
        );

    return domain_response_compound_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_dnsrecordList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_dnsrecordList) {
            custom_dnsrecord_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_dnsrecordList);
        a_obj_dnsrecordList = NULL;
    }
    return NULL;

}
