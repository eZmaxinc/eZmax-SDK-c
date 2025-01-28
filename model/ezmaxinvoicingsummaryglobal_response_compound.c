#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryglobal_response_compound.h"



static ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_create_internal(
    int pki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxinvoicing_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *dt_ezmaxinvoicingsummaryglobal_start,
    char *dt_ezmaxinvoicingsummaryglobal_end,
    int i_ezmaxinvoicingsummaryglobal_days,
    char *d_ezmaxinvoicingsummaryglobal_countreal,
    char *d_ezmaxinvoicingsummaryglobal_countbilled,
    char *d_ezmaxinvoicingsummaryglobal_subtotal,
    char *d_ezmaxinvoicingsummaryglobal_rebateamount,
    char *d_ezmaxinvoicingsummaryglobal_rebatepercent,
    char *d_ezmaxinvoicingsummaryglobal_rebatetotal,
    char *d_ezmaxinvoicingsummaryglobal_total,
    char *d_ezmaxinvoicingsummaryglobal_representative,
    char *d_ezmaxinvoicingsummaryglobal_partner,
    char *d_ezmaxinvoicingsummaryglobal_net,
    int b_ezmaxinvoicingsummaryglobal_adjustment,
    char *t_ezmaxproduct_help_x,
    list_t *a_obj_ezmaxinvoicingcommission
    ) {
    ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_local_var = malloc(sizeof(ezmaxinvoicingsummaryglobal_response_compound_t));
    if (!ezmaxinvoicingsummaryglobal_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryglobal_response_compound_local_var->pki_ezmaxinvoicingsummaryglobal_id = pki_ezmaxinvoicingsummaryglobal_id;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->dt_ezmaxinvoicingsummaryglobal_start = dt_ezmaxinvoicingsummaryglobal_start;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->dt_ezmaxinvoicingsummaryglobal_end = dt_ezmaxinvoicingsummaryglobal_end;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->i_ezmaxinvoicingsummaryglobal_days = i_ezmaxinvoicingsummaryglobal_days;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_countreal = d_ezmaxinvoicingsummaryglobal_countreal;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_countbilled = d_ezmaxinvoicingsummaryglobal_countbilled;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_subtotal = d_ezmaxinvoicingsummaryglobal_subtotal;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_rebateamount = d_ezmaxinvoicingsummaryglobal_rebateamount;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_rebatepercent = d_ezmaxinvoicingsummaryglobal_rebatepercent;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_rebatetotal = d_ezmaxinvoicingsummaryglobal_rebatetotal;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_total = d_ezmaxinvoicingsummaryglobal_total;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_representative = d_ezmaxinvoicingsummaryglobal_representative;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_partner = d_ezmaxinvoicingsummaryglobal_partner;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->d_ezmaxinvoicingsummaryglobal_net = d_ezmaxinvoicingsummaryglobal_net;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->b_ezmaxinvoicingsummaryglobal_adjustment = b_ezmaxinvoicingsummaryglobal_adjustment;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    ezmaxinvoicingsummaryglobal_response_compound_local_var->a_obj_ezmaxinvoicingcommission = a_obj_ezmaxinvoicingcommission;

    ezmaxinvoicingsummaryglobal_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicingsummaryglobal_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_create(
    int pki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxinvoicing_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *dt_ezmaxinvoicingsummaryglobal_start,
    char *dt_ezmaxinvoicingsummaryglobal_end,
    int i_ezmaxinvoicingsummaryglobal_days,
    char *d_ezmaxinvoicingsummaryglobal_countreal,
    char *d_ezmaxinvoicingsummaryglobal_countbilled,
    char *d_ezmaxinvoicingsummaryglobal_subtotal,
    char *d_ezmaxinvoicingsummaryglobal_rebateamount,
    char *d_ezmaxinvoicingsummaryglobal_rebatepercent,
    char *d_ezmaxinvoicingsummaryglobal_rebatetotal,
    char *d_ezmaxinvoicingsummaryglobal_total,
    char *d_ezmaxinvoicingsummaryglobal_representative,
    char *d_ezmaxinvoicingsummaryglobal_partner,
    char *d_ezmaxinvoicingsummaryglobal_net,
    int b_ezmaxinvoicingsummaryglobal_adjustment,
    char *t_ezmaxproduct_help_x,
    list_t *a_obj_ezmaxinvoicingcommission
    ) {
    return ezmaxinvoicingsummaryglobal_response_compound_create_internal (
        pki_ezmaxinvoicingsummaryglobal_id,
        fki_ezmaxinvoicing_id,
        fki_ezmaxproduct_id,
        s_ezmaxproduct_description_x,
        dt_ezmaxinvoicingsummaryglobal_start,
        dt_ezmaxinvoicingsummaryglobal_end,
        i_ezmaxinvoicingsummaryglobal_days,
        d_ezmaxinvoicingsummaryglobal_countreal,
        d_ezmaxinvoicingsummaryglobal_countbilled,
        d_ezmaxinvoicingsummaryglobal_subtotal,
        d_ezmaxinvoicingsummaryglobal_rebateamount,
        d_ezmaxinvoicingsummaryglobal_rebatepercent,
        d_ezmaxinvoicingsummaryglobal_rebatetotal,
        d_ezmaxinvoicingsummaryglobal_total,
        d_ezmaxinvoicingsummaryglobal_representative,
        d_ezmaxinvoicingsummaryglobal_partner,
        d_ezmaxinvoicingsummaryglobal_net,
        b_ezmaxinvoicingsummaryglobal_adjustment,
        t_ezmaxproduct_help_x,
        a_obj_ezmaxinvoicingcommission
        );
}

void ezmaxinvoicingsummaryglobal_response_compound_free(ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound) {
    if(NULL == ezmaxinvoicingsummaryglobal_response_compound){
        return ;
    }
    if(ezmaxinvoicingsummaryglobal_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingsummaryglobal_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x) {
        free(ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x);
        ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start) {
        free(ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start);
        ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end) {
        free(ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end);
        ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net) {
        free(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net);
        ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x) {
        free(ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x);
        ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission) {
            ezmaxinvoicingcommission_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission);
        ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission = NULL;
    }
    free(ezmaxinvoicingsummaryglobal_response_compound);
}

cJSON *ezmaxinvoicingsummaryglobal_response_compound_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryglobal_response_compound->pki_ezmaxinvoicingsummaryglobal_id
    if(ezmaxinvoicingsummaryglobal_response_compound->pki_ezmaxinvoicingsummaryglobal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryglobalID", ezmaxinvoicingsummaryglobal_response_compound->pki_ezmaxinvoicingsummaryglobal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxproduct_id
    if (!ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x
    if (!ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start
    if (!ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingsummaryglobalStart", ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end
    if (!ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingsummaryglobalEnd", ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->i_ezmaxinvoicingsummaryglobal_days
    if (!ezmaxinvoicingsummaryglobal_response_compound->i_ezmaxinvoicingsummaryglobal_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingsummaryglobalDays", ezmaxinvoicingsummaryglobal_response_compound->i_ezmaxinvoicingsummaryglobal_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalCountreal", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalCountbilled", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalSubtotal", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebateamount", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebatepercent", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebatetotal", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total
    if (!ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalTotal", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative
    if(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRepresentative", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner
    if(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalPartner", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net
    if(ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalNet", ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response_compound->b_ezmaxinvoicingsummaryglobal_adjustment
    if (!ezmaxinvoicingsummaryglobal_response_compound->b_ezmaxinvoicingsummaryglobal_adjustment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingsummaryglobalAdjustment", ezmaxinvoicingsummaryglobal_response_compound->b_ezmaxinvoicingsummaryglobal_adjustment) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x
    if (!ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzmaxproductHelpX", ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission
    if(ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission) {
    cJSON *a_obj_ezmaxinvoicingcommission = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingcommission");
    if(a_obj_ezmaxinvoicingcommission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingcommissionListEntry;
    if (ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission) {
    list_ForEach(a_obj_ezmaxinvoicingcommissionListEntry, ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission) {
    cJSON *itemLocal = ezmaxinvoicingcommission_response_compound_convertToJSON(a_obj_ezmaxinvoicingcommissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingcommission, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryglobal_response_compoundJSON){

    ezmaxinvoicingsummaryglobal_response_compound_t *ezmaxinvoicingsummaryglobal_response_compound_local_var = NULL;

    // define the local list for ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission
    list_t *a_obj_ezmaxinvoicingcommissionList = NULL;

    // ezmaxinvoicingsummaryglobal_response_compound->pki_ezmaxinvoicingsummaryglobal_id
    cJSON *pki_ezmaxinvoicingsummaryglobal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "pkiEzmaxinvoicingsummaryglobalID");
    if (cJSON_IsNull(pki_ezmaxinvoicingsummaryglobal_id)) {
        pki_ezmaxinvoicingsummaryglobal_id = NULL;
    }
    if (pki_ezmaxinvoicingsummaryglobal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryglobal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "fkiEzmaxinvoicingID");
    if (cJSON_IsNull(fki_ezmaxinvoicing_id)) {
        fki_ezmaxinvoicing_id = NULL;
    }
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryglobal_response_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "fkiEzmaxproductID");
    if (cJSON_IsNull(fki_ezmaxproduct_id)) {
        fki_ezmaxproduct_id = NULL;
    }
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryglobal_response_compound->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "sEzmaxproductDescriptionX");
    if (cJSON_IsNull(s_ezmaxproduct_description_x)) {
        s_ezmaxproduct_description_x = NULL;
    }
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_start
    cJSON *dt_ezmaxinvoicingsummaryglobal_start = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dtEzmaxinvoicingsummaryglobalStart");
    if (cJSON_IsNull(dt_ezmaxinvoicingsummaryglobal_start)) {
        dt_ezmaxinvoicingsummaryglobal_start = NULL;
    }
    if (!dt_ezmaxinvoicingsummaryglobal_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingsummaryglobal_start))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->dt_ezmaxinvoicingsummaryglobal_end
    cJSON *dt_ezmaxinvoicingsummaryglobal_end = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dtEzmaxinvoicingsummaryglobalEnd");
    if (cJSON_IsNull(dt_ezmaxinvoicingsummaryglobal_end)) {
        dt_ezmaxinvoicingsummaryglobal_end = NULL;
    }
    if (!dt_ezmaxinvoicingsummaryglobal_end) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingsummaryglobal_end))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->i_ezmaxinvoicingsummaryglobal_days
    cJSON *i_ezmaxinvoicingsummaryglobal_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "iEzmaxinvoicingsummaryglobalDays");
    if (cJSON_IsNull(i_ezmaxinvoicingsummaryglobal_days)) {
        i_ezmaxinvoicingsummaryglobal_days = NULL;
    }
    if (!i_ezmaxinvoicingsummaryglobal_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingsummaryglobal_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countreal
    cJSON *d_ezmaxinvoicingsummaryglobal_countreal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalCountreal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_countreal)) {
        d_ezmaxinvoicingsummaryglobal_countreal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_countreal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_countreal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_countbilled
    cJSON *d_ezmaxinvoicingsummaryglobal_countbilled = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalCountbilled");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_countbilled)) {
        d_ezmaxinvoicingsummaryglobal_countbilled = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_countbilled) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_countbilled))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_subtotal
    cJSON *d_ezmaxinvoicingsummaryglobal_subtotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalSubtotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_subtotal)) {
        d_ezmaxinvoicingsummaryglobal_subtotal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_subtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_subtotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebateamount
    cJSON *d_ezmaxinvoicingsummaryglobal_rebateamount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalRebateamount");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_rebateamount)) {
        d_ezmaxinvoicingsummaryglobal_rebateamount = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_rebateamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebateamount))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatepercent
    cJSON *d_ezmaxinvoicingsummaryglobal_rebatepercent = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalRebatepercent");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_rebatepercent)) {
        d_ezmaxinvoicingsummaryglobal_rebatepercent = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebatepercent))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_rebatetotal
    cJSON *d_ezmaxinvoicingsummaryglobal_rebatetotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalRebatetotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_rebatetotal)) {
        d_ezmaxinvoicingsummaryglobal_rebatetotal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebatetotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_total
    cJSON *d_ezmaxinvoicingsummaryglobal_total = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalTotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_total)) {
        d_ezmaxinvoicingsummaryglobal_total = NULL;
    }
    if (!d_ezmaxinvoicingsummaryglobal_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_total))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_representative
    cJSON *d_ezmaxinvoicingsummaryglobal_representative = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalRepresentative");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_representative)) {
        d_ezmaxinvoicingsummaryglobal_representative = NULL;
    }
    if (d_ezmaxinvoicingsummaryglobal_representative) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_representative) && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_representative))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_partner
    cJSON *d_ezmaxinvoicingsummaryglobal_partner = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalPartner");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_partner)) {
        d_ezmaxinvoicingsummaryglobal_partner = NULL;
    }
    if (d_ezmaxinvoicingsummaryglobal_partner) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_partner) && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_partner))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response_compound->d_ezmaxinvoicingsummaryglobal_net
    cJSON *d_ezmaxinvoicingsummaryglobal_net = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "dEzmaxinvoicingsummaryglobalNet");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_net)) {
        d_ezmaxinvoicingsummaryglobal_net = NULL;
    }
    if (d_ezmaxinvoicingsummaryglobal_net) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_net) && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_net))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response_compound->b_ezmaxinvoicingsummaryglobal_adjustment
    cJSON *b_ezmaxinvoicingsummaryglobal_adjustment = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "bEzmaxinvoicingsummaryglobalAdjustment");
    if (cJSON_IsNull(b_ezmaxinvoicingsummaryglobal_adjustment)) {
        b_ezmaxinvoicingsummaryglobal_adjustment = NULL;
    }
    if (!b_ezmaxinvoicingsummaryglobal_adjustment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingsummaryglobal_adjustment))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingsummaryglobal_response_compound->t_ezmaxproduct_help_x
    cJSON *t_ezmaxproduct_help_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "tEzmaxproductHelpX");
    if (cJSON_IsNull(t_ezmaxproduct_help_x)) {
        t_ezmaxproduct_help_x = NULL;
    }
    if (!t_ezmaxproduct_help_x) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezmaxproduct_help_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response_compound->a_obj_ezmaxinvoicingcommission
    cJSON *a_obj_ezmaxinvoicingcommission = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compoundJSON, "a_objEzmaxinvoicingcommission");
    if (cJSON_IsNull(a_obj_ezmaxinvoicingcommission)) {
        a_obj_ezmaxinvoicingcommission = NULL;
    }
    if (a_obj_ezmaxinvoicingcommission) { 
    cJSON *a_obj_ezmaxinvoicingcommission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingcommission)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingcommissionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingcommission_local_nonprimitive,a_obj_ezmaxinvoicingcommission )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingcommission_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingcommission_response_compound_t *a_obj_ezmaxinvoicingcommissionItem = ezmaxinvoicingcommission_response_compound_parseFromJSON(a_obj_ezmaxinvoicingcommission_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingcommissionList, a_obj_ezmaxinvoicingcommissionItem);
    }
    }


    ezmaxinvoicingsummaryglobal_response_compound_local_var = ezmaxinvoicingsummaryglobal_response_compound_create_internal (
        pki_ezmaxinvoicingsummaryglobal_id ? pki_ezmaxinvoicingsummaryglobal_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        strdup(dt_ezmaxinvoicingsummaryglobal_start->valuestring),
        strdup(dt_ezmaxinvoicingsummaryglobal_end->valuestring),
        i_ezmaxinvoicingsummaryglobal_days->valuedouble,
        strdup(d_ezmaxinvoicingsummaryglobal_countreal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_countbilled->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_subtotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebateamount->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebatepercent->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebatetotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_total->valuestring),
        d_ezmaxinvoicingsummaryglobal_representative && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_representative) ? strdup(d_ezmaxinvoicingsummaryglobal_representative->valuestring) : NULL,
        d_ezmaxinvoicingsummaryglobal_partner && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_partner) ? strdup(d_ezmaxinvoicingsummaryglobal_partner->valuestring) : NULL,
        d_ezmaxinvoicingsummaryglobal_net && !cJSON_IsNull(d_ezmaxinvoicingsummaryglobal_net) ? strdup(d_ezmaxinvoicingsummaryglobal_net->valuestring) : NULL,
        b_ezmaxinvoicingsummaryglobal_adjustment->valueint,
        strdup(t_ezmaxproduct_help_x->valuestring),
        a_obj_ezmaxinvoicingcommission ? a_obj_ezmaxinvoicingcommissionList : NULL
        );

    return ezmaxinvoicingsummaryglobal_response_compound_local_var;
end:
    if (a_obj_ezmaxinvoicingcommissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingcommissionList) {
            ezmaxinvoicingcommission_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingcommissionList);
        a_obj_ezmaxinvoicingcommissionList = NULL;
    }
    return NULL;

}
