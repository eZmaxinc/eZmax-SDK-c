#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryinternal_response_compound.h"



ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_create(
    int pki_ezmaxinvoicingsummaryinternal_id,
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description,
    char *s_ezmaxinvoicingsummaryinternal_description_x,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetail
    ) {
    ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_local_var = malloc(sizeof(ezmaxinvoicingsummaryinternal_response_compound_t));
    if (!ezmaxinvoicingsummaryinternal_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryinternal_response_compound_local_var->pki_ezmaxinvoicingsummaryinternal_id = pki_ezmaxinvoicingsummaryinternal_id;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->obj_ezmaxinvoicingsummaryinternal_description = obj_ezmaxinvoicingsummaryinternal_description;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->s_ezmaxinvoicingsummaryinternal_description_x = s_ezmaxinvoicingsummaryinternal_description_x;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezmaxinvoicingsummaryinternal_response_compound_local_var->a_obj_ezmaxinvoicingsummaryinternaldetail = a_obj_ezmaxinvoicingsummaryinternaldetail;

    return ezmaxinvoicingsummaryinternal_response_compound_local_var;
}


void ezmaxinvoicingsummaryinternal_response_compound_free(ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound) {
    if(NULL == ezmaxinvoicingsummaryinternal_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description) {
        multilingual_ezmaxinvoicingsummaryinternal_description_free(ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description);
        ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x) {
        free(ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x);
        ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x) {
        free(ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x);
        ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail) {
            ezmaxinvoicingsummaryinternaldetail_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail);
        ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail = NULL;
    }
    free(ezmaxinvoicingsummaryinternal_response_compound);
}

cJSON *ezmaxinvoicingsummaryinternal_response_compound_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryinternal_response_compound->pki_ezmaxinvoicingsummaryinternal_id
    if(ezmaxinvoicingsummaryinternal_response_compound->pki_ezmaxinvoicingsummaryinternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryinternalID", ezmaxinvoicingsummaryinternal_response_compound->pki_ezmaxinvoicingsummaryinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description
    if (!ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description) {
        goto fail;
    }
    cJSON *obj_ezmaxinvoicingsummaryinternal_description_local_JSON = multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description);
    if(obj_ezmaxinvoicingsummaryinternal_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxinvoicingsummaryinternalDescription", obj_ezmaxinvoicingsummaryinternal_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x
    if (!ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxinvoicingsummaryinternalDescriptionX", ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternal_response_compound->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryinternal_response_compound->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryinternal_response_compound->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternal_response_compound->fki_billingentityinternal_id
    if (!ezmaxinvoicingsummaryinternal_response_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezmaxinvoicingsummaryinternal_response_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x
    if (!ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail
    if (!ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail) {
        goto fail;
    }
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingsummaryinternaldetail");
    if(a_obj_ezmaxinvoicingsummaryinternaldetail == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingsummaryinternaldetailListEntry;
    if (ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail) {
    list_ForEach(a_obj_ezmaxinvoicingsummaryinternaldetailListEntry, ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail) {
    cJSON *itemLocal = ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(a_obj_ezmaxinvoicingsummaryinternaldetailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingsummaryinternaldetail, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternal_response_compoundJSON){

    ezmaxinvoicingsummaryinternal_response_compound_t *ezmaxinvoicingsummaryinternal_response_compound_local_var = NULL;

    // define the local variable for ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description
    multilingual_ezmaxinvoicingsummaryinternal_description_t *obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = NULL;

    // define the local list for ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail
    list_t *a_obj_ezmaxinvoicingsummaryinternaldetailList = NULL;

    // ezmaxinvoicingsummaryinternal_response_compound->pki_ezmaxinvoicingsummaryinternal_id
    cJSON *pki_ezmaxinvoicingsummaryinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "pkiEzmaxinvoicingsummaryinternalID");
    if (pki_ezmaxinvoicingsummaryinternal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternal_response_compound->obj_ezmaxinvoicingsummaryinternal_description
    cJSON *obj_ezmaxinvoicingsummaryinternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "objEzmaxinvoicingsummaryinternalDescription");
    if (!obj_ezmaxinvoicingsummaryinternal_description) {
        goto end;
    }

    
    obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = multilingual_ezmaxinvoicingsummaryinternal_description_parseFromJSON(obj_ezmaxinvoicingsummaryinternal_description); //nonprimitive

    // ezmaxinvoicingsummaryinternal_response_compound->s_ezmaxinvoicingsummaryinternal_description_x
    cJSON *s_ezmaxinvoicingsummaryinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "sEzmaxinvoicingsummaryinternalDescriptionX");
    if (!s_ezmaxinvoicingsummaryinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxinvoicingsummaryinternal_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternal_response_compound->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "fkiEzmaxinvoicingID");
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternal_response_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryinternal_response_compound->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternal_response_compound->a_obj_ezmaxinvoicingsummaryinternaldetail
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternal_response_compoundJSON, "a_objEzmaxinvoicingsummaryinternaldetail");
    if (!a_obj_ezmaxinvoicingsummaryinternaldetail) {
        goto end;
    }

    
    cJSON *a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingsummaryinternaldetail)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingsummaryinternaldetailList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive,a_obj_ezmaxinvoicingsummaryinternaldetail )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingsummaryinternaldetail_response_compound_t *a_obj_ezmaxinvoicingsummaryinternaldetailItem = ezmaxinvoicingsummaryinternaldetail_response_compound_parseFromJSON(a_obj_ezmaxinvoicingsummaryinternaldetail_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingsummaryinternaldetailList, a_obj_ezmaxinvoicingsummaryinternaldetailItem);
    }


    ezmaxinvoicingsummaryinternal_response_compound_local_var = ezmaxinvoicingsummaryinternal_response_compound_create (
        pki_ezmaxinvoicingsummaryinternal_id ? pki_ezmaxinvoicingsummaryinternal_id->valuedouble : 0,
        obj_ezmaxinvoicingsummaryinternal_description_local_nonprim,
        strdup(s_ezmaxinvoicingsummaryinternal_description_x->valuestring),
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        a_obj_ezmaxinvoicingsummaryinternaldetailList
        );

    return ezmaxinvoicingsummaryinternal_response_compound_local_var;
end:
    if (obj_ezmaxinvoicingsummaryinternal_description_local_nonprim) {
        multilingual_ezmaxinvoicingsummaryinternal_description_free(obj_ezmaxinvoicingsummaryinternal_description_local_nonprim);
        obj_ezmaxinvoicingsummaryinternal_description_local_nonprim = NULL;
    }
    if (a_obj_ezmaxinvoicingsummaryinternaldetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingsummaryinternaldetailList) {
            ezmaxinvoicingsummaryinternaldetail_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingsummaryinternaldetailList);
        a_obj_ezmaxinvoicingsummaryinternaldetailList = NULL;
    }
    return NULL;

}
