#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_response_compound.h"



static documenttype_response_compound_t *documenttype_response_compound_create_internal(
    int *pki_documenttype_id,
    multilingual_documenttype_name_t *obj_documenttype_name,
    char *s_documenttype_defaultfilename,
    int *b_documenttype_showagent,
    int *b_documenttype_isactive,
    int *b_documenttype_isrequired,
    int *b_documenttype_sale,
    int *b_documenttype_rental,
    int *b_documenttype_reference,
    int *b_documenttype_mortgagereference,
    int *b_documenttype_evaluation,
    int *b_documenttype_consultation,
    int *b_documenttype_otherservices,
    int *b_documenttype_foreclosedsale,
    int *b_documenttype_commercialfunding,
    int *b_documenttype_canafe,
    ezmax_api_definition__full_field_e_documenttype_ezcom__e e_documenttype_ezcom,
    ezmax_api_definition__full_field_e_documenttype_privacydefault__e e_documenttype_privacydefault,
    ezmax_api_definition__full_field_e_documenttype_statusdefault__e e_documenttype_statusdefault,
    ezmax_api_definition__full_field_e_documenttype_salebyowner__e e_documenttype_salebyowner,
    ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e e_documenttype_saledisplaybyrole,
    ezmax_api_definition__full_field_e_documenttype_transactiontype__e e_documenttype_transactiontype,
    ezmax_api_definition__full_field_e_documenttype_repossession__e e_documenttype_repossession
    ) {
    documenttype_response_compound_t *documenttype_response_compound_local_var = malloc(sizeof(documenttype_response_compound_t));
    if (!documenttype_response_compound_local_var) {
        return NULL;
    }
    memset(documenttype_response_compound_local_var, 0, sizeof(documenttype_response_compound_t));
    documenttype_response_compound_local_var->_library_owned = 1;
    documenttype_response_compound_local_var->pki_documenttype_id = pki_documenttype_id;
    documenttype_response_compound_local_var->obj_documenttype_name = obj_documenttype_name;
    documenttype_response_compound_local_var->s_documenttype_defaultfilename = s_documenttype_defaultfilename;
    documenttype_response_compound_local_var->b_documenttype_showagent = b_documenttype_showagent;
    documenttype_response_compound_local_var->b_documenttype_isactive = b_documenttype_isactive;
    documenttype_response_compound_local_var->b_documenttype_isrequired = b_documenttype_isrequired;
    documenttype_response_compound_local_var->b_documenttype_sale = b_documenttype_sale;
    documenttype_response_compound_local_var->b_documenttype_rental = b_documenttype_rental;
    documenttype_response_compound_local_var->b_documenttype_reference = b_documenttype_reference;
    documenttype_response_compound_local_var->b_documenttype_mortgagereference = b_documenttype_mortgagereference;
    documenttype_response_compound_local_var->b_documenttype_evaluation = b_documenttype_evaluation;
    documenttype_response_compound_local_var->b_documenttype_consultation = b_documenttype_consultation;
    documenttype_response_compound_local_var->b_documenttype_otherservices = b_documenttype_otherservices;
    documenttype_response_compound_local_var->b_documenttype_foreclosedsale = b_documenttype_foreclosedsale;
    documenttype_response_compound_local_var->b_documenttype_commercialfunding = b_documenttype_commercialfunding;
    documenttype_response_compound_local_var->b_documenttype_canafe = b_documenttype_canafe;
    documenttype_response_compound_local_var->e_documenttype_ezcom = e_documenttype_ezcom;
    documenttype_response_compound_local_var->e_documenttype_privacydefault = e_documenttype_privacydefault;
    documenttype_response_compound_local_var->e_documenttype_statusdefault = e_documenttype_statusdefault;
    documenttype_response_compound_local_var->e_documenttype_salebyowner = e_documenttype_salebyowner;
    documenttype_response_compound_local_var->e_documenttype_saledisplaybyrole = e_documenttype_saledisplaybyrole;
    documenttype_response_compound_local_var->e_documenttype_transactiontype = e_documenttype_transactiontype;
    documenttype_response_compound_local_var->e_documenttype_repossession = e_documenttype_repossession;
    return documenttype_response_compound_local_var;
}

__attribute__((deprecated)) documenttype_response_compound_t *documenttype_response_compound_create(
    int *pki_documenttype_id,
    multilingual_documenttype_name_t *obj_documenttype_name,
    char *s_documenttype_defaultfilename,
    int *b_documenttype_showagent,
    int *b_documenttype_isactive,
    int *b_documenttype_isrequired,
    int *b_documenttype_sale,
    int *b_documenttype_rental,
    int *b_documenttype_reference,
    int *b_documenttype_mortgagereference,
    int *b_documenttype_evaluation,
    int *b_documenttype_consultation,
    int *b_documenttype_otherservices,
    int *b_documenttype_foreclosedsale,
    int *b_documenttype_commercialfunding,
    int *b_documenttype_canafe,
    ezmax_api_definition__full_field_e_documenttype_ezcom__e e_documenttype_ezcom,
    ezmax_api_definition__full_field_e_documenttype_privacydefault__e e_documenttype_privacydefault,
    ezmax_api_definition__full_field_e_documenttype_statusdefault__e e_documenttype_statusdefault,
    ezmax_api_definition__full_field_e_documenttype_salebyowner__e e_documenttype_salebyowner,
    ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e e_documenttype_saledisplaybyrole,
    ezmax_api_definition__full_field_e_documenttype_transactiontype__e e_documenttype_transactiontype,
    ezmax_api_definition__full_field_e_documenttype_repossession__e e_documenttype_repossession
    ) {
    int *pki_documenttype_id_copy = NULL;
    if (pki_documenttype_id) {
        pki_documenttype_id_copy = malloc(sizeof(int));
        if (pki_documenttype_id_copy) *pki_documenttype_id_copy = *pki_documenttype_id;
    }
    int *b_documenttype_showagent_copy = NULL;
    if (b_documenttype_showagent) {
        b_documenttype_showagent_copy = malloc(sizeof(int));
        if (b_documenttype_showagent_copy) *b_documenttype_showagent_copy = *b_documenttype_showagent;
    }
    int *b_documenttype_isactive_copy = NULL;
    if (b_documenttype_isactive) {
        b_documenttype_isactive_copy = malloc(sizeof(int));
        if (b_documenttype_isactive_copy) *b_documenttype_isactive_copy = *b_documenttype_isactive;
    }
    int *b_documenttype_isrequired_copy = NULL;
    if (b_documenttype_isrequired) {
        b_documenttype_isrequired_copy = malloc(sizeof(int));
        if (b_documenttype_isrequired_copy) *b_documenttype_isrequired_copy = *b_documenttype_isrequired;
    }
    int *b_documenttype_sale_copy = NULL;
    if (b_documenttype_sale) {
        b_documenttype_sale_copy = malloc(sizeof(int));
        if (b_documenttype_sale_copy) *b_documenttype_sale_copy = *b_documenttype_sale;
    }
    int *b_documenttype_rental_copy = NULL;
    if (b_documenttype_rental) {
        b_documenttype_rental_copy = malloc(sizeof(int));
        if (b_documenttype_rental_copy) *b_documenttype_rental_copy = *b_documenttype_rental;
    }
    int *b_documenttype_reference_copy = NULL;
    if (b_documenttype_reference) {
        b_documenttype_reference_copy = malloc(sizeof(int));
        if (b_documenttype_reference_copy) *b_documenttype_reference_copy = *b_documenttype_reference;
    }
    int *b_documenttype_mortgagereference_copy = NULL;
    if (b_documenttype_mortgagereference) {
        b_documenttype_mortgagereference_copy = malloc(sizeof(int));
        if (b_documenttype_mortgagereference_copy) *b_documenttype_mortgagereference_copy = *b_documenttype_mortgagereference;
    }
    int *b_documenttype_evaluation_copy = NULL;
    if (b_documenttype_evaluation) {
        b_documenttype_evaluation_copy = malloc(sizeof(int));
        if (b_documenttype_evaluation_copy) *b_documenttype_evaluation_copy = *b_documenttype_evaluation;
    }
    int *b_documenttype_consultation_copy = NULL;
    if (b_documenttype_consultation) {
        b_documenttype_consultation_copy = malloc(sizeof(int));
        if (b_documenttype_consultation_copy) *b_documenttype_consultation_copy = *b_documenttype_consultation;
    }
    int *b_documenttype_otherservices_copy = NULL;
    if (b_documenttype_otherservices) {
        b_documenttype_otherservices_copy = malloc(sizeof(int));
        if (b_documenttype_otherservices_copy) *b_documenttype_otherservices_copy = *b_documenttype_otherservices;
    }
    int *b_documenttype_foreclosedsale_copy = NULL;
    if (b_documenttype_foreclosedsale) {
        b_documenttype_foreclosedsale_copy = malloc(sizeof(int));
        if (b_documenttype_foreclosedsale_copy) *b_documenttype_foreclosedsale_copy = *b_documenttype_foreclosedsale;
    }
    int *b_documenttype_commercialfunding_copy = NULL;
    if (b_documenttype_commercialfunding) {
        b_documenttype_commercialfunding_copy = malloc(sizeof(int));
        if (b_documenttype_commercialfunding_copy) *b_documenttype_commercialfunding_copy = *b_documenttype_commercialfunding;
    }
    int *b_documenttype_canafe_copy = NULL;
    if (b_documenttype_canafe) {
        b_documenttype_canafe_copy = malloc(sizeof(int));
        if (b_documenttype_canafe_copy) *b_documenttype_canafe_copy = *b_documenttype_canafe;
    }
    documenttype_response_compound_t *result = documenttype_response_compound_create_internal (
        pki_documenttype_id_copy,
        obj_documenttype_name,
        s_documenttype_defaultfilename,
        b_documenttype_showagent_copy,
        b_documenttype_isactive_copy,
        b_documenttype_isrequired_copy,
        b_documenttype_sale_copy,
        b_documenttype_rental_copy,
        b_documenttype_reference_copy,
        b_documenttype_mortgagereference_copy,
        b_documenttype_evaluation_copy,
        b_documenttype_consultation_copy,
        b_documenttype_otherservices_copy,
        b_documenttype_foreclosedsale_copy,
        b_documenttype_commercialfunding_copy,
        b_documenttype_canafe_copy,
        e_documenttype_ezcom,
        e_documenttype_privacydefault,
        e_documenttype_statusdefault,
        e_documenttype_salebyowner,
        e_documenttype_saledisplaybyrole,
        e_documenttype_transactiontype,
        e_documenttype_repossession
        );
    if (!result) {
        free(pki_documenttype_id_copy);
        free(b_documenttype_showagent_copy);
        free(b_documenttype_isactive_copy);
        free(b_documenttype_isrequired_copy);
        free(b_documenttype_sale_copy);
        free(b_documenttype_rental_copy);
        free(b_documenttype_reference_copy);
        free(b_documenttype_mortgagereference_copy);
        free(b_documenttype_evaluation_copy);
        free(b_documenttype_consultation_copy);
        free(b_documenttype_otherservices_copy);
        free(b_documenttype_foreclosedsale_copy);
        free(b_documenttype_commercialfunding_copy);
        free(b_documenttype_canafe_copy);
    }
    return result;
}

void documenttype_response_compound_free(documenttype_response_compound_t *documenttype_response_compound) {
    if(NULL == documenttype_response_compound){
        return ;
    }
    if(documenttype_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_response_compound->pki_documenttype_id) {
        free(documenttype_response_compound->pki_documenttype_id);
        documenttype_response_compound->pki_documenttype_id = NULL;
    }
    if (documenttype_response_compound->obj_documenttype_name) {
        multilingual_documenttype_name_free(documenttype_response_compound->obj_documenttype_name);
        documenttype_response_compound->obj_documenttype_name = NULL;
    }
    if (documenttype_response_compound->s_documenttype_defaultfilename) {
        free(documenttype_response_compound->s_documenttype_defaultfilename);
        documenttype_response_compound->s_documenttype_defaultfilename = NULL;
    }
    if (documenttype_response_compound->b_documenttype_showagent) {
        free(documenttype_response_compound->b_documenttype_showagent);
        documenttype_response_compound->b_documenttype_showagent = NULL;
    }
    if (documenttype_response_compound->b_documenttype_isactive) {
        free(documenttype_response_compound->b_documenttype_isactive);
        documenttype_response_compound->b_documenttype_isactive = NULL;
    }
    if (documenttype_response_compound->b_documenttype_isrequired) {
        free(documenttype_response_compound->b_documenttype_isrequired);
        documenttype_response_compound->b_documenttype_isrequired = NULL;
    }
    if (documenttype_response_compound->b_documenttype_sale) {
        free(documenttype_response_compound->b_documenttype_sale);
        documenttype_response_compound->b_documenttype_sale = NULL;
    }
    if (documenttype_response_compound->b_documenttype_rental) {
        free(documenttype_response_compound->b_documenttype_rental);
        documenttype_response_compound->b_documenttype_rental = NULL;
    }
    if (documenttype_response_compound->b_documenttype_reference) {
        free(documenttype_response_compound->b_documenttype_reference);
        documenttype_response_compound->b_documenttype_reference = NULL;
    }
    if (documenttype_response_compound->b_documenttype_mortgagereference) {
        free(documenttype_response_compound->b_documenttype_mortgagereference);
        documenttype_response_compound->b_documenttype_mortgagereference = NULL;
    }
    if (documenttype_response_compound->b_documenttype_evaluation) {
        free(documenttype_response_compound->b_documenttype_evaluation);
        documenttype_response_compound->b_documenttype_evaluation = NULL;
    }
    if (documenttype_response_compound->b_documenttype_consultation) {
        free(documenttype_response_compound->b_documenttype_consultation);
        documenttype_response_compound->b_documenttype_consultation = NULL;
    }
    if (documenttype_response_compound->b_documenttype_otherservices) {
        free(documenttype_response_compound->b_documenttype_otherservices);
        documenttype_response_compound->b_documenttype_otherservices = NULL;
    }
    if (documenttype_response_compound->b_documenttype_foreclosedsale) {
        free(documenttype_response_compound->b_documenttype_foreclosedsale);
        documenttype_response_compound->b_documenttype_foreclosedsale = NULL;
    }
    if (documenttype_response_compound->b_documenttype_commercialfunding) {
        free(documenttype_response_compound->b_documenttype_commercialfunding);
        documenttype_response_compound->b_documenttype_commercialfunding = NULL;
    }
    if (documenttype_response_compound->b_documenttype_canafe) {
        free(documenttype_response_compound->b_documenttype_canafe);
        documenttype_response_compound->b_documenttype_canafe = NULL;
    }
    free(documenttype_response_compound);
}

cJSON *documenttype_response_compound_convertToJSON(documenttype_response_compound_t *documenttype_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_response_compound->pki_documenttype_id
    if (!documenttype_response_compound->pki_documenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDocumenttypeID", *documenttype_response_compound->pki_documenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // documenttype_response_compound->obj_documenttype_name
    if (!documenttype_response_compound->obj_documenttype_name) {
        goto fail;
    }
    cJSON *obj_documenttype_name_local_JSON = multilingual_documenttype_name_convertToJSON(documenttype_response_compound->obj_documenttype_name);
    if(obj_documenttype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDocumenttypeName", obj_documenttype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // documenttype_response_compound->s_documenttype_defaultfilename
    if (!documenttype_response_compound->s_documenttype_defaultfilename) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDocumenttypeDefaultfilename", documenttype_response_compound->s_documenttype_defaultfilename) == NULL) {
    goto fail; //String
    }


    // documenttype_response_compound->b_documenttype_showagent
    if (!documenttype_response_compound->b_documenttype_showagent) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDocumenttypeShowagent", *documenttype_response_compound->b_documenttype_showagent) == NULL) {
    goto fail; //Bool
    }


    // documenttype_response_compound->b_documenttype_isactive
    if (!documenttype_response_compound->b_documenttype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDocumenttypeIsactive", *documenttype_response_compound->b_documenttype_isactive) == NULL) {
    goto fail; //Bool
    }


    // documenttype_response_compound->b_documenttype_isrequired
    if (!documenttype_response_compound->b_documenttype_isrequired) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDocumenttypeIsrequired", *documenttype_response_compound->b_documenttype_isrequired) == NULL) {
    goto fail; //Bool
    }


    // documenttype_response_compound->b_documenttype_sale
    if(documenttype_response_compound->b_documenttype_sale) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeSale", *documenttype_response_compound->b_documenttype_sale) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_rental
    if(documenttype_response_compound->b_documenttype_rental) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeRental", *documenttype_response_compound->b_documenttype_rental) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_reference
    if(documenttype_response_compound->b_documenttype_reference) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeReference", *documenttype_response_compound->b_documenttype_reference) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_mortgagereference
    if(documenttype_response_compound->b_documenttype_mortgagereference) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeMortgagereference", *documenttype_response_compound->b_documenttype_mortgagereference) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_evaluation
    if(documenttype_response_compound->b_documenttype_evaluation) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeEvaluation", *documenttype_response_compound->b_documenttype_evaluation) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_consultation
    if(documenttype_response_compound->b_documenttype_consultation) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeConsultation", *documenttype_response_compound->b_documenttype_consultation) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_otherservices
    if(documenttype_response_compound->b_documenttype_otherservices) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeOtherservices", *documenttype_response_compound->b_documenttype_otherservices) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_foreclosedsale
    if(documenttype_response_compound->b_documenttype_foreclosedsale) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeForeclosedsale", *documenttype_response_compound->b_documenttype_foreclosedsale) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_commercialfunding
    if(documenttype_response_compound->b_documenttype_commercialfunding) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeCommercialfunding", *documenttype_response_compound->b_documenttype_commercialfunding) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->b_documenttype_canafe
    if(documenttype_response_compound->b_documenttype_canafe) {
    if(cJSON_AddBoolToObject(item, "bDocumenttypeCanafe", *documenttype_response_compound->b_documenttype_canafe) == NULL) {
    goto fail; //Bool
    }
    }


    // documenttype_response_compound->e_documenttype_ezcom
    if(documenttype_response_compound->e_documenttype_ezcom != ezmax_api_definition__full_field_e_documenttype_ezcom__NULL) {
    cJSON *e_documenttype_ezcom_local_JSON = field_e_documenttype_ezcom_convertToJSON(documenttype_response_compound->e_documenttype_ezcom);
    if(e_documenttype_ezcom_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeEzcom", e_documenttype_ezcom_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_privacydefault
    if(documenttype_response_compound->e_documenttype_privacydefault != ezmax_api_definition__full_field_e_documenttype_privacydefault__NULL) {
    cJSON *e_documenttype_privacydefault_local_JSON = field_e_documenttype_privacydefault_convertToJSON(documenttype_response_compound->e_documenttype_privacydefault);
    if(e_documenttype_privacydefault_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypePrivacydefault", e_documenttype_privacydefault_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_statusdefault
    if(documenttype_response_compound->e_documenttype_statusdefault != ezmax_api_definition__full_field_e_documenttype_statusdefault__NULL) {
    cJSON *e_documenttype_statusdefault_local_JSON = field_e_documenttype_statusdefault_convertToJSON(documenttype_response_compound->e_documenttype_statusdefault);
    if(e_documenttype_statusdefault_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeStatusdefault", e_documenttype_statusdefault_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_salebyowner
    if(documenttype_response_compound->e_documenttype_salebyowner != ezmax_api_definition__full_field_e_documenttype_salebyowner__NULL) {
    cJSON *e_documenttype_salebyowner_local_JSON = field_e_documenttype_salebyowner_convertToJSON(documenttype_response_compound->e_documenttype_salebyowner);
    if(e_documenttype_salebyowner_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeSalebyowner", e_documenttype_salebyowner_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_saledisplaybyrole
    if(documenttype_response_compound->e_documenttype_saledisplaybyrole != ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__NULL) {
    cJSON *e_documenttype_saledisplaybyrole_local_JSON = field_e_documenttype_saledisplaybyrole_convertToJSON(documenttype_response_compound->e_documenttype_saledisplaybyrole);
    if(e_documenttype_saledisplaybyrole_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeSaledisplaybyrole", e_documenttype_saledisplaybyrole_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_transactiontype
    if(documenttype_response_compound->e_documenttype_transactiontype != ezmax_api_definition__full_field_e_documenttype_transactiontype__NULL) {
    cJSON *e_documenttype_transactiontype_local_JSON = field_e_documenttype_transactiontype_convertToJSON(documenttype_response_compound->e_documenttype_transactiontype);
    if(e_documenttype_transactiontype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeTransactiontype", e_documenttype_transactiontype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // documenttype_response_compound->e_documenttype_repossession
    if(documenttype_response_compound->e_documenttype_repossession != ezmax_api_definition__full_field_e_documenttype_repossession__NULL) {
    cJSON *e_documenttype_repossession_local_JSON = field_e_documenttype_repossession_convertToJSON(documenttype_response_compound->e_documenttype_repossession);
    if(e_documenttype_repossession_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypeRepossession", e_documenttype_repossession_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttype_response_compound_t *documenttype_response_compound_parseFromJSON(cJSON *documenttype_response_compoundJSON){

    documenttype_response_compound_t *documenttype_response_compound_local_var = NULL;

    // define the local variable for documenttype_response_compound->pki_documenttype_id
    int *pki_documenttype_id_local_var = NULL;

    // define the local variable for documenttype_response_compound->obj_documenttype_name
    multilingual_documenttype_name_t *obj_documenttype_name_local_nonprim = NULL;

    char *s_documenttype_defaultfilename_local_str = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_showagent
    int *b_documenttype_showagent_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_isactive
    int *b_documenttype_isactive_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_isrequired
    int *b_documenttype_isrequired_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_sale
    int *b_documenttype_sale_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_rental
    int *b_documenttype_rental_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_reference
    int *b_documenttype_reference_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_mortgagereference
    int *b_documenttype_mortgagereference_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_evaluation
    int *b_documenttype_evaluation_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_consultation
    int *b_documenttype_consultation_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_otherservices
    int *b_documenttype_otherservices_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_foreclosedsale
    int *b_documenttype_foreclosedsale_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_commercialfunding
    int *b_documenttype_commercialfunding_local_var = NULL;

    // define the local variable for documenttype_response_compound->b_documenttype_canafe
    int *b_documenttype_canafe_local_var = NULL;

    // define the local variable for documenttype_response_compound->e_documenttype_ezcom
    ezmax_api_definition__full_field_e_documenttype_ezcom__e e_documenttype_ezcom_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_privacydefault
    ezmax_api_definition__full_field_e_documenttype_privacydefault__e e_documenttype_privacydefault_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_statusdefault
    ezmax_api_definition__full_field_e_documenttype_statusdefault__e e_documenttype_statusdefault_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_salebyowner
    ezmax_api_definition__full_field_e_documenttype_salebyowner__e e_documenttype_salebyowner_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_saledisplaybyrole
    ezmax_api_definition__full_field_e_documenttype_saledisplaybyrole__e e_documenttype_saledisplaybyrole_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_transactiontype
    ezmax_api_definition__full_field_e_documenttype_transactiontype__e e_documenttype_transactiontype_local_nonprim = 0;

    // define the local variable for documenttype_response_compound->e_documenttype_repossession
    ezmax_api_definition__full_field_e_documenttype_repossession__e e_documenttype_repossession_local_nonprim = 0;

    // documenttype_response_compound->pki_documenttype_id
    cJSON *pki_documenttype_id = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "pkiDocumenttypeID");
    if (cJSON_IsNull(pki_documenttype_id)) {
        pki_documenttype_id = NULL;
    }
    if (!pki_documenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_documenttype_id))
    {
    goto end; //Numeric
    }
    pki_documenttype_id_local_var = malloc(sizeof(int));
    if(!pki_documenttype_id_local_var)
    {
        goto end;
    }
    *pki_documenttype_id_local_var = pki_documenttype_id->valuedouble;

    // documenttype_response_compound->obj_documenttype_name
    cJSON *obj_documenttype_name = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "objDocumenttypeName");
    if (cJSON_IsNull(obj_documenttype_name)) {
        obj_documenttype_name = NULL;
    }
    if (!obj_documenttype_name) {
        goto end;
    }

    
    obj_documenttype_name_local_nonprim = multilingual_documenttype_name_parseFromJSON(obj_documenttype_name); //nonprimitive

    // documenttype_response_compound->s_documenttype_defaultfilename
    cJSON *s_documenttype_defaultfilename = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "sDocumenttypeDefaultfilename");
    if (cJSON_IsNull(s_documenttype_defaultfilename)) {
        s_documenttype_defaultfilename = NULL;
    }
    if (!s_documenttype_defaultfilename) {
        goto end;
    }

    
    if(!cJSON_IsString(s_documenttype_defaultfilename))
    {
    goto end; //String
    }

    // documenttype_response_compound->b_documenttype_showagent
    cJSON *b_documenttype_showagent = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeShowagent");
    if (cJSON_IsNull(b_documenttype_showagent)) {
        b_documenttype_showagent = NULL;
    }
    if (!b_documenttype_showagent) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_documenttype_showagent))
    {
    goto end; //Bool
    }
    b_documenttype_showagent_local_var = malloc(sizeof(int));
    if(!b_documenttype_showagent_local_var)
    {
        goto end;
    }
    *b_documenttype_showagent_local_var = b_documenttype_showagent->valueint;

    // documenttype_response_compound->b_documenttype_isactive
    cJSON *b_documenttype_isactive = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeIsactive");
    if (cJSON_IsNull(b_documenttype_isactive)) {
        b_documenttype_isactive = NULL;
    }
    if (!b_documenttype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_documenttype_isactive))
    {
    goto end; //Bool
    }
    b_documenttype_isactive_local_var = malloc(sizeof(int));
    if(!b_documenttype_isactive_local_var)
    {
        goto end;
    }
    *b_documenttype_isactive_local_var = b_documenttype_isactive->valueint;

    // documenttype_response_compound->b_documenttype_isrequired
    cJSON *b_documenttype_isrequired = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeIsrequired");
    if (cJSON_IsNull(b_documenttype_isrequired)) {
        b_documenttype_isrequired = NULL;
    }
    if (!b_documenttype_isrequired) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_documenttype_isrequired))
    {
    goto end; //Bool
    }
    b_documenttype_isrequired_local_var = malloc(sizeof(int));
    if(!b_documenttype_isrequired_local_var)
    {
        goto end;
    }
    *b_documenttype_isrequired_local_var = b_documenttype_isrequired->valueint;

    // documenttype_response_compound->b_documenttype_sale
    cJSON *b_documenttype_sale = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeSale");
    if (cJSON_IsNull(b_documenttype_sale)) {
        b_documenttype_sale = NULL;
    }
    if (b_documenttype_sale) { 
    if(!cJSON_IsBool(b_documenttype_sale))
    {
    goto end; //Bool
    }
    b_documenttype_sale_local_var = malloc(sizeof(int));
    if(!b_documenttype_sale_local_var)
    {
        goto end;
    }
    *b_documenttype_sale_local_var = b_documenttype_sale->valueint;
    }

    // documenttype_response_compound->b_documenttype_rental
    cJSON *b_documenttype_rental = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeRental");
    if (cJSON_IsNull(b_documenttype_rental)) {
        b_documenttype_rental = NULL;
    }
    if (b_documenttype_rental) { 
    if(!cJSON_IsBool(b_documenttype_rental))
    {
    goto end; //Bool
    }
    b_documenttype_rental_local_var = malloc(sizeof(int));
    if(!b_documenttype_rental_local_var)
    {
        goto end;
    }
    *b_documenttype_rental_local_var = b_documenttype_rental->valueint;
    }

    // documenttype_response_compound->b_documenttype_reference
    cJSON *b_documenttype_reference = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeReference");
    if (cJSON_IsNull(b_documenttype_reference)) {
        b_documenttype_reference = NULL;
    }
    if (b_documenttype_reference) { 
    if(!cJSON_IsBool(b_documenttype_reference))
    {
    goto end; //Bool
    }
    b_documenttype_reference_local_var = malloc(sizeof(int));
    if(!b_documenttype_reference_local_var)
    {
        goto end;
    }
    *b_documenttype_reference_local_var = b_documenttype_reference->valueint;
    }

    // documenttype_response_compound->b_documenttype_mortgagereference
    cJSON *b_documenttype_mortgagereference = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeMortgagereference");
    if (cJSON_IsNull(b_documenttype_mortgagereference)) {
        b_documenttype_mortgagereference = NULL;
    }
    if (b_documenttype_mortgagereference) { 
    if(!cJSON_IsBool(b_documenttype_mortgagereference))
    {
    goto end; //Bool
    }
    b_documenttype_mortgagereference_local_var = malloc(sizeof(int));
    if(!b_documenttype_mortgagereference_local_var)
    {
        goto end;
    }
    *b_documenttype_mortgagereference_local_var = b_documenttype_mortgagereference->valueint;
    }

    // documenttype_response_compound->b_documenttype_evaluation
    cJSON *b_documenttype_evaluation = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeEvaluation");
    if (cJSON_IsNull(b_documenttype_evaluation)) {
        b_documenttype_evaluation = NULL;
    }
    if (b_documenttype_evaluation) { 
    if(!cJSON_IsBool(b_documenttype_evaluation))
    {
    goto end; //Bool
    }
    b_documenttype_evaluation_local_var = malloc(sizeof(int));
    if(!b_documenttype_evaluation_local_var)
    {
        goto end;
    }
    *b_documenttype_evaluation_local_var = b_documenttype_evaluation->valueint;
    }

    // documenttype_response_compound->b_documenttype_consultation
    cJSON *b_documenttype_consultation = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeConsultation");
    if (cJSON_IsNull(b_documenttype_consultation)) {
        b_documenttype_consultation = NULL;
    }
    if (b_documenttype_consultation) { 
    if(!cJSON_IsBool(b_documenttype_consultation))
    {
    goto end; //Bool
    }
    b_documenttype_consultation_local_var = malloc(sizeof(int));
    if(!b_documenttype_consultation_local_var)
    {
        goto end;
    }
    *b_documenttype_consultation_local_var = b_documenttype_consultation->valueint;
    }

    // documenttype_response_compound->b_documenttype_otherservices
    cJSON *b_documenttype_otherservices = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeOtherservices");
    if (cJSON_IsNull(b_documenttype_otherservices)) {
        b_documenttype_otherservices = NULL;
    }
    if (b_documenttype_otherservices) { 
    if(!cJSON_IsBool(b_documenttype_otherservices))
    {
    goto end; //Bool
    }
    b_documenttype_otherservices_local_var = malloc(sizeof(int));
    if(!b_documenttype_otherservices_local_var)
    {
        goto end;
    }
    *b_documenttype_otherservices_local_var = b_documenttype_otherservices->valueint;
    }

    // documenttype_response_compound->b_documenttype_foreclosedsale
    cJSON *b_documenttype_foreclosedsale = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeForeclosedsale");
    if (cJSON_IsNull(b_documenttype_foreclosedsale)) {
        b_documenttype_foreclosedsale = NULL;
    }
    if (b_documenttype_foreclosedsale) { 
    if(!cJSON_IsBool(b_documenttype_foreclosedsale))
    {
    goto end; //Bool
    }
    b_documenttype_foreclosedsale_local_var = malloc(sizeof(int));
    if(!b_documenttype_foreclosedsale_local_var)
    {
        goto end;
    }
    *b_documenttype_foreclosedsale_local_var = b_documenttype_foreclosedsale->valueint;
    }

    // documenttype_response_compound->b_documenttype_commercialfunding
    cJSON *b_documenttype_commercialfunding = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeCommercialfunding");
    if (cJSON_IsNull(b_documenttype_commercialfunding)) {
        b_documenttype_commercialfunding = NULL;
    }
    if (b_documenttype_commercialfunding) { 
    if(!cJSON_IsBool(b_documenttype_commercialfunding))
    {
    goto end; //Bool
    }
    b_documenttype_commercialfunding_local_var = malloc(sizeof(int));
    if(!b_documenttype_commercialfunding_local_var)
    {
        goto end;
    }
    *b_documenttype_commercialfunding_local_var = b_documenttype_commercialfunding->valueint;
    }

    // documenttype_response_compound->b_documenttype_canafe
    cJSON *b_documenttype_canafe = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "bDocumenttypeCanafe");
    if (cJSON_IsNull(b_documenttype_canafe)) {
        b_documenttype_canafe = NULL;
    }
    if (b_documenttype_canafe) { 
    if(!cJSON_IsBool(b_documenttype_canafe))
    {
    goto end; //Bool
    }
    b_documenttype_canafe_local_var = malloc(sizeof(int));
    if(!b_documenttype_canafe_local_var)
    {
        goto end;
    }
    *b_documenttype_canafe_local_var = b_documenttype_canafe->valueint;
    }

    // documenttype_response_compound->e_documenttype_ezcom
    cJSON *e_documenttype_ezcom = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeEzcom");
    if (cJSON_IsNull(e_documenttype_ezcom)) {
        e_documenttype_ezcom = NULL;
    }
    if (e_documenttype_ezcom) { 
    e_documenttype_ezcom_local_nonprim = field_e_documenttype_ezcom_parseFromJSON(e_documenttype_ezcom); //custom
    }

    // documenttype_response_compound->e_documenttype_privacydefault
    cJSON *e_documenttype_privacydefault = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypePrivacydefault");
    if (cJSON_IsNull(e_documenttype_privacydefault)) {
        e_documenttype_privacydefault = NULL;
    }
    if (e_documenttype_privacydefault) { 
    e_documenttype_privacydefault_local_nonprim = field_e_documenttype_privacydefault_parseFromJSON(e_documenttype_privacydefault); //custom
    }

    // documenttype_response_compound->e_documenttype_statusdefault
    cJSON *e_documenttype_statusdefault = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeStatusdefault");
    if (cJSON_IsNull(e_documenttype_statusdefault)) {
        e_documenttype_statusdefault = NULL;
    }
    if (e_documenttype_statusdefault) { 
    e_documenttype_statusdefault_local_nonprim = field_e_documenttype_statusdefault_parseFromJSON(e_documenttype_statusdefault); //custom
    }

    // documenttype_response_compound->e_documenttype_salebyowner
    cJSON *e_documenttype_salebyowner = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeSalebyowner");
    if (cJSON_IsNull(e_documenttype_salebyowner)) {
        e_documenttype_salebyowner = NULL;
    }
    if (e_documenttype_salebyowner) { 
    e_documenttype_salebyowner_local_nonprim = field_e_documenttype_salebyowner_parseFromJSON(e_documenttype_salebyowner); //custom
    }

    // documenttype_response_compound->e_documenttype_saledisplaybyrole
    cJSON *e_documenttype_saledisplaybyrole = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeSaledisplaybyrole");
    if (cJSON_IsNull(e_documenttype_saledisplaybyrole)) {
        e_documenttype_saledisplaybyrole = NULL;
    }
    if (e_documenttype_saledisplaybyrole) { 
    e_documenttype_saledisplaybyrole_local_nonprim = field_e_documenttype_saledisplaybyrole_parseFromJSON(e_documenttype_saledisplaybyrole); //custom
    }

    // documenttype_response_compound->e_documenttype_transactiontype
    cJSON *e_documenttype_transactiontype = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeTransactiontype");
    if (cJSON_IsNull(e_documenttype_transactiontype)) {
        e_documenttype_transactiontype = NULL;
    }
    if (e_documenttype_transactiontype) { 
    e_documenttype_transactiontype_local_nonprim = field_e_documenttype_transactiontype_parseFromJSON(e_documenttype_transactiontype); //custom
    }

    // documenttype_response_compound->e_documenttype_repossession
    cJSON *e_documenttype_repossession = cJSON_GetObjectItemCaseSensitive(documenttype_response_compoundJSON, "eDocumenttypeRepossession");
    if (cJSON_IsNull(e_documenttype_repossession)) {
        e_documenttype_repossession = NULL;
    }
    if (e_documenttype_repossession) { 
    e_documenttype_repossession_local_nonprim = field_e_documenttype_repossession_parseFromJSON(e_documenttype_repossession); //custom
    }


    if (s_documenttype_defaultfilename && !cJSON_IsNull(s_documenttype_defaultfilename)) s_documenttype_defaultfilename_local_str = strdup(s_documenttype_defaultfilename->valuestring);

    documenttype_response_compound_local_var = documenttype_response_compound_create_internal (
        pki_documenttype_id_local_var,
        obj_documenttype_name_local_nonprim,
        s_documenttype_defaultfilename_local_str,
        b_documenttype_showagent_local_var,
        b_documenttype_isactive_local_var,
        b_documenttype_isrequired_local_var,
        b_documenttype_sale_local_var,
        b_documenttype_rental_local_var,
        b_documenttype_reference_local_var,
        b_documenttype_mortgagereference_local_var,
        b_documenttype_evaluation_local_var,
        b_documenttype_consultation_local_var,
        b_documenttype_otherservices_local_var,
        b_documenttype_foreclosedsale_local_var,
        b_documenttype_commercialfunding_local_var,
        b_documenttype_canafe_local_var,
        e_documenttype_ezcom ? e_documenttype_ezcom_local_nonprim : 0,
        e_documenttype_privacydefault ? e_documenttype_privacydefault_local_nonprim : 0,
        e_documenttype_statusdefault ? e_documenttype_statusdefault_local_nonprim : 0,
        e_documenttype_salebyowner ? e_documenttype_salebyowner_local_nonprim : 0,
        e_documenttype_saledisplaybyrole ? e_documenttype_saledisplaybyrole_local_nonprim : 0,
        e_documenttype_transactiontype ? e_documenttype_transactiontype_local_nonprim : 0,
        e_documenttype_repossession ? e_documenttype_repossession_local_nonprim : 0
        );

    if (!documenttype_response_compound_local_var) {
        goto end;
    }

    return documenttype_response_compound_local_var;
end:
    if (pki_documenttype_id_local_var) {
        free(pki_documenttype_id_local_var);
        pki_documenttype_id_local_var = NULL;
    }
    if (obj_documenttype_name_local_nonprim) {
        multilingual_documenttype_name_free(obj_documenttype_name_local_nonprim);
        obj_documenttype_name_local_nonprim = NULL;
    }
    if (s_documenttype_defaultfilename_local_str) {
        free(s_documenttype_defaultfilename_local_str);
        s_documenttype_defaultfilename_local_str = NULL;
    }
    if (b_documenttype_showagent_local_var) {
        free(b_documenttype_showagent_local_var);
        b_documenttype_showagent_local_var = NULL;
    }
    if (b_documenttype_isactive_local_var) {
        free(b_documenttype_isactive_local_var);
        b_documenttype_isactive_local_var = NULL;
    }
    if (b_documenttype_isrequired_local_var) {
        free(b_documenttype_isrequired_local_var);
        b_documenttype_isrequired_local_var = NULL;
    }
    if (b_documenttype_sale_local_var) {
        free(b_documenttype_sale_local_var);
        b_documenttype_sale_local_var = NULL;
    }
    if (b_documenttype_rental_local_var) {
        free(b_documenttype_rental_local_var);
        b_documenttype_rental_local_var = NULL;
    }
    if (b_documenttype_reference_local_var) {
        free(b_documenttype_reference_local_var);
        b_documenttype_reference_local_var = NULL;
    }
    if (b_documenttype_mortgagereference_local_var) {
        free(b_documenttype_mortgagereference_local_var);
        b_documenttype_mortgagereference_local_var = NULL;
    }
    if (b_documenttype_evaluation_local_var) {
        free(b_documenttype_evaluation_local_var);
        b_documenttype_evaluation_local_var = NULL;
    }
    if (b_documenttype_consultation_local_var) {
        free(b_documenttype_consultation_local_var);
        b_documenttype_consultation_local_var = NULL;
    }
    if (b_documenttype_otherservices_local_var) {
        free(b_documenttype_otherservices_local_var);
        b_documenttype_otherservices_local_var = NULL;
    }
    if (b_documenttype_foreclosedsale_local_var) {
        free(b_documenttype_foreclosedsale_local_var);
        b_documenttype_foreclosedsale_local_var = NULL;
    }
    if (b_documenttype_commercialfunding_local_var) {
        free(b_documenttype_commercialfunding_local_var);
        b_documenttype_commercialfunding_local_var = NULL;
    }
    if (b_documenttype_canafe_local_var) {
        free(b_documenttype_canafe_local_var);
        b_documenttype_canafe_local_var = NULL;
    }
    if (e_documenttype_ezcom_local_nonprim) {
        e_documenttype_ezcom_local_nonprim = 0;
    }
    if (e_documenttype_privacydefault_local_nonprim) {
        e_documenttype_privacydefault_local_nonprim = 0;
    }
    if (e_documenttype_statusdefault_local_nonprim) {
        e_documenttype_statusdefault_local_nonprim = 0;
    }
    if (e_documenttype_salebyowner_local_nonprim) {
        e_documenttype_salebyowner_local_nonprim = 0;
    }
    if (e_documenttype_saledisplaybyrole_local_nonprim) {
        e_documenttype_saledisplaybyrole_local_nonprim = 0;
    }
    if (e_documenttype_transactiontype_local_nonprim) {
        e_documenttype_transactiontype_local_nonprim = 0;
    }
    if (e_documenttype_repossession_local_nonprim) {
        e_documenttype_repossession_local_nonprim = 0;
    }
    return NULL;

}
