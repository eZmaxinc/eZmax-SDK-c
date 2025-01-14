#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_response.h"



domain_response_t *domain_response_create(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_validdkim,
    int b_domain_validmailfrom,
    int b_domain_validcustomer,
    common_audit_t *obj_audit
    ) {
    domain_response_t *domain_response_local_var = malloc(sizeof(domain_response_t));
    if (!domain_response_local_var) {
        return NULL;
    }
    domain_response_local_var->pki_domain_id = pki_domain_id;
    domain_response_local_var->s_domain_name = s_domain_name;
    domain_response_local_var->b_domain_validdkim = b_domain_validdkim;
    domain_response_local_var->b_domain_validmailfrom = b_domain_validmailfrom;
    domain_response_local_var->b_domain_validcustomer = b_domain_validcustomer;
    domain_response_local_var->obj_audit = obj_audit;

    return domain_response_local_var;
}


void domain_response_free(domain_response_t *domain_response) {
    if(NULL == domain_response){
        return ;
    }
    listEntry_t *listEntry;
    if (domain_response->s_domain_name) {
        free(domain_response->s_domain_name);
        domain_response->s_domain_name = NULL;
    }
    if (domain_response->obj_audit) {
        common_audit_free(domain_response->obj_audit);
        domain_response->obj_audit = NULL;
    }
    free(domain_response);
}

cJSON *domain_response_convertToJSON(domain_response_t *domain_response) {
    cJSON *item = cJSON_CreateObject();

    // domain_response->pki_domain_id
    if (!domain_response->pki_domain_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDomainID", domain_response->pki_domain_id) == NULL) {
    goto fail; //Numeric
    }


    // domain_response->s_domain_name
    if (!domain_response->s_domain_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDomainName", domain_response->s_domain_name) == NULL) {
    goto fail; //String
    }


    // domain_response->b_domain_validdkim
    if (!domain_response->b_domain_validdkim) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValiddkim", domain_response->b_domain_validdkim) == NULL) {
    goto fail; //Bool
    }


    // domain_response->b_domain_validmailfrom
    if (!domain_response->b_domain_validmailfrom) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValidmailfrom", domain_response->b_domain_validmailfrom) == NULL) {
    goto fail; //Bool
    }


    // domain_response->b_domain_validcustomer
    if (!domain_response->b_domain_validcustomer) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDomainValidcustomer", domain_response->b_domain_validcustomer) == NULL) {
    goto fail; //Bool
    }


    // domain_response->obj_audit
    if (!domain_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(domain_response->obj_audit);
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

domain_response_t *domain_response_parseFromJSON(cJSON *domain_responseJSON){

    domain_response_t *domain_response_local_var = NULL;

    // define the local variable for domain_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // domain_response->pki_domain_id
    cJSON *pki_domain_id = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "pkiDomainID");
    if (!pki_domain_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_domain_id))
    {
    goto end; //Numeric
    }

    // domain_response->s_domain_name
    cJSON *s_domain_name = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "sDomainName");
    if (!s_domain_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_domain_name))
    {
    goto end; //String
    }

    // domain_response->b_domain_validdkim
    cJSON *b_domain_validdkim = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "bDomainValiddkim");
    if (!b_domain_validdkim) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validdkim))
    {
    goto end; //Bool
    }

    // domain_response->b_domain_validmailfrom
    cJSON *b_domain_validmailfrom = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "bDomainValidmailfrom");
    if (!b_domain_validmailfrom) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validmailfrom))
    {
    goto end; //Bool
    }

    // domain_response->b_domain_validcustomer
    cJSON *b_domain_validcustomer = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "bDomainValidcustomer");
    if (!b_domain_validcustomer) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_domain_validcustomer))
    {
    goto end; //Bool
    }

    // domain_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(domain_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    domain_response_local_var = domain_response_create (
        pki_domain_id->valuedouble,
        strdup(s_domain_name->valuestring),
        b_domain_validdkim->valueint,
        b_domain_validmailfrom->valueint,
        b_domain_validcustomer->valueint,
        obj_audit_local_nonprim
        );

    return domain_response_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
