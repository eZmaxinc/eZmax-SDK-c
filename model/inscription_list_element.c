#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_list_element.h"



static inscription_list_element_t *inscription_list_element_create_internal(
    int pki_inscription_id,
    int pki_inscriptionnotauthenticated_id,
    int fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    char *dt_inscription_date,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    int b_inscription_isactive,
    int b_inscription_archived,
    int b_inscription_inspection,
    char *dt_inscriptionnotauthenticated_notaryscheduledate,
    char *dt_inscriptionnotauthenticated_transactiondate,
    char *dt_inscriptionnotauthenticated_transactiondate_real,
    int b_inscriptionnotauthenticated_conditional,
    int b_inscriptionnotauthenticated_isactive,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x,
    int i_inscriptionnotauthenticated_canceled,
    int b_allowed_copyintoinscriptionedm
    ) {
    inscription_list_element_t *inscription_list_element_local_var = malloc(sizeof(inscription_list_element_t));
    if (!inscription_list_element_local_var) {
        return NULL;
    }
    inscription_list_element_local_var->pki_inscription_id = pki_inscription_id;
    inscription_list_element_local_var->pki_inscriptionnotauthenticated_id = pki_inscriptionnotauthenticated_id;
    inscription_list_element_local_var->fki_inscriptiontype_id = fki_inscriptiontype_id;
    inscription_list_element_local_var->s_inscriptiontype_name_x = s_inscriptiontype_name_x;
    inscription_list_element_local_var->e_inscription_step = e_inscription_step;
    inscription_list_element_local_var->s_inscription_civicend = s_inscription_civicend;
    inscription_list_element_local_var->s_inscription_mls = s_inscription_mls;
    inscription_list_element_local_var->d_inscription_saleprice = d_inscription_saleprice;
    inscription_list_element_local_var->d_inscription_rentprice = d_inscription_rentprice;
    inscription_list_element_local_var->dt_inscription_date = dt_inscription_date;
    inscription_list_element_local_var->dt_inscription_expirationdate = dt_inscription_expirationdate;
    inscription_list_element_local_var->dt_inscription_notarydate = dt_inscription_notarydate;
    inscription_list_element_local_var->b_inscription_isactive = b_inscription_isactive;
    inscription_list_element_local_var->b_inscription_archived = b_inscription_archived;
    inscription_list_element_local_var->b_inscription_inspection = b_inscription_inspection;
    inscription_list_element_local_var->dt_inscriptionnotauthenticated_notaryscheduledate = dt_inscriptionnotauthenticated_notaryscheduledate;
    inscription_list_element_local_var->dt_inscriptionnotauthenticated_transactiondate = dt_inscriptionnotauthenticated_transactiondate;
    inscription_list_element_local_var->dt_inscriptionnotauthenticated_transactiondate_real = dt_inscriptionnotauthenticated_transactiondate_real;
    inscription_list_element_local_var->b_inscriptionnotauthenticated_conditional = b_inscriptionnotauthenticated_conditional;
    inscription_list_element_local_var->b_inscriptionnotauthenticated_isactive = b_inscriptionnotauthenticated_isactive;
    inscription_list_element_local_var->s_address_civic = s_address_civic;
    inscription_list_element_local_var->s_address_street = s_address_street;
    inscription_list_element_local_var->s_address_suite = s_address_suite;
    inscription_list_element_local_var->s_address_city = s_address_city;
    inscription_list_element_local_var->s_address_zip = s_address_zip;
    inscription_list_element_local_var->s_province_name_x = s_province_name_x;
    inscription_list_element_local_var->s_country_name_x = s_country_name_x;
    inscription_list_element_local_var->i_inscriptionnotauthenticated_canceled = i_inscriptionnotauthenticated_canceled;
    inscription_list_element_local_var->b_allowed_copyintoinscriptionedm = b_allowed_copyintoinscriptionedm;

    inscription_list_element_local_var->_library_owned = 1;
    return inscription_list_element_local_var;
}

__attribute__((deprecated)) inscription_list_element_t *inscription_list_element_create(
    int pki_inscription_id,
    int pki_inscriptionnotauthenticated_id,
    int fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step,
    char *s_inscription_civicend,
    char *s_inscription_mls,
    char *d_inscription_saleprice,
    char *d_inscription_rentprice,
    char *dt_inscription_date,
    char *dt_inscription_expirationdate,
    char *dt_inscription_notarydate,
    int b_inscription_isactive,
    int b_inscription_archived,
    int b_inscription_inspection,
    char *dt_inscriptionnotauthenticated_notaryscheduledate,
    char *dt_inscriptionnotauthenticated_transactiondate,
    char *dt_inscriptionnotauthenticated_transactiondate_real,
    int b_inscriptionnotauthenticated_conditional,
    int b_inscriptionnotauthenticated_isactive,
    char *s_address_civic,
    char *s_address_street,
    char *s_address_suite,
    char *s_address_city,
    char *s_address_zip,
    char *s_province_name_x,
    char *s_country_name_x,
    int i_inscriptionnotauthenticated_canceled,
    int b_allowed_copyintoinscriptionedm
    ) {
    return inscription_list_element_create_internal (
        pki_inscription_id,
        pki_inscriptionnotauthenticated_id,
        fki_inscriptiontype_id,
        s_inscriptiontype_name_x,
        e_inscription_step,
        s_inscription_civicend,
        s_inscription_mls,
        d_inscription_saleprice,
        d_inscription_rentprice,
        dt_inscription_date,
        dt_inscription_expirationdate,
        dt_inscription_notarydate,
        b_inscription_isactive,
        b_inscription_archived,
        b_inscription_inspection,
        dt_inscriptionnotauthenticated_notaryscheduledate,
        dt_inscriptionnotauthenticated_transactiondate,
        dt_inscriptionnotauthenticated_transactiondate_real,
        b_inscriptionnotauthenticated_conditional,
        b_inscriptionnotauthenticated_isactive,
        s_address_civic,
        s_address_street,
        s_address_suite,
        s_address_city,
        s_address_zip,
        s_province_name_x,
        s_country_name_x,
        i_inscriptionnotauthenticated_canceled,
        b_allowed_copyintoinscriptionedm
        );
}

void inscription_list_element_free(inscription_list_element_t *inscription_list_element) {
    if(NULL == inscription_list_element){
        return ;
    }
    if(inscription_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_list_element->s_inscriptiontype_name_x) {
        free(inscription_list_element->s_inscriptiontype_name_x);
        inscription_list_element->s_inscriptiontype_name_x = NULL;
    }
    if (inscription_list_element->s_inscription_civicend) {
        free(inscription_list_element->s_inscription_civicend);
        inscription_list_element->s_inscription_civicend = NULL;
    }
    if (inscription_list_element->s_inscription_mls) {
        free(inscription_list_element->s_inscription_mls);
        inscription_list_element->s_inscription_mls = NULL;
    }
    if (inscription_list_element->d_inscription_saleprice) {
        free(inscription_list_element->d_inscription_saleprice);
        inscription_list_element->d_inscription_saleprice = NULL;
    }
    if (inscription_list_element->d_inscription_rentprice) {
        free(inscription_list_element->d_inscription_rentprice);
        inscription_list_element->d_inscription_rentprice = NULL;
    }
    if (inscription_list_element->dt_inscription_date) {
        free(inscription_list_element->dt_inscription_date);
        inscription_list_element->dt_inscription_date = NULL;
    }
    if (inscription_list_element->dt_inscription_expirationdate) {
        free(inscription_list_element->dt_inscription_expirationdate);
        inscription_list_element->dt_inscription_expirationdate = NULL;
    }
    if (inscription_list_element->dt_inscription_notarydate) {
        free(inscription_list_element->dt_inscription_notarydate);
        inscription_list_element->dt_inscription_notarydate = NULL;
    }
    if (inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate) {
        free(inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate);
        inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate = NULL;
    }
    if (inscription_list_element->dt_inscriptionnotauthenticated_transactiondate) {
        free(inscription_list_element->dt_inscriptionnotauthenticated_transactiondate);
        inscription_list_element->dt_inscriptionnotauthenticated_transactiondate = NULL;
    }
    if (inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real) {
        free(inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real);
        inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    if (inscription_list_element->s_address_civic) {
        free(inscription_list_element->s_address_civic);
        inscription_list_element->s_address_civic = NULL;
    }
    if (inscription_list_element->s_address_street) {
        free(inscription_list_element->s_address_street);
        inscription_list_element->s_address_street = NULL;
    }
    if (inscription_list_element->s_address_suite) {
        free(inscription_list_element->s_address_suite);
        inscription_list_element->s_address_suite = NULL;
    }
    if (inscription_list_element->s_address_city) {
        free(inscription_list_element->s_address_city);
        inscription_list_element->s_address_city = NULL;
    }
    if (inscription_list_element->s_address_zip) {
        free(inscription_list_element->s_address_zip);
        inscription_list_element->s_address_zip = NULL;
    }
    if (inscription_list_element->s_province_name_x) {
        free(inscription_list_element->s_province_name_x);
        inscription_list_element->s_province_name_x = NULL;
    }
    if (inscription_list_element->s_country_name_x) {
        free(inscription_list_element->s_country_name_x);
        inscription_list_element->s_country_name_x = NULL;
    }
    free(inscription_list_element);
}

cJSON *inscription_list_element_convertToJSON(inscription_list_element_t *inscription_list_element) {
    cJSON *item = cJSON_CreateObject();

    // inscription_list_element->pki_inscription_id
    if (!inscription_list_element->pki_inscription_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInscriptionID", inscription_list_element->pki_inscription_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_list_element->pki_inscriptionnotauthenticated_id
    if(inscription_list_element->pki_inscriptionnotauthenticated_id) {
    if(cJSON_AddNumberToObject(item, "pkiInscriptionnotauthenticatedID", inscription_list_element->pki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // inscription_list_element->fki_inscriptiontype_id
    if (!inscription_list_element->fki_inscriptiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontypeID", inscription_list_element->fki_inscriptiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // inscription_list_element->s_inscriptiontype_name_x
    if (!inscription_list_element->s_inscriptiontype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptiontypeNameX", inscription_list_element->s_inscriptiontype_name_x) == NULL) {
    goto fail; //String
    }


    // inscription_list_element->e_inscription_step
    if (ezmax_api_definition__full_field_e_inscription_step__NULL == inscription_list_element->e_inscription_step) {
        goto fail;
    }
    cJSON *e_inscription_step_local_JSON = field_e_inscription_step_convertToJSON(inscription_list_element->e_inscription_step);
    if(e_inscription_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInscriptionStep", e_inscription_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // inscription_list_element->s_inscription_civicend
    if (!inscription_list_element->s_inscription_civicend) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptionCivicend", inscription_list_element->s_inscription_civicend) == NULL) {
    goto fail; //String
    }


    // inscription_list_element->s_inscription_mls
    if(inscription_list_element->s_inscription_mls) {
    if(cJSON_AddStringToObject(item, "sInscriptionMLS", inscription_list_element->s_inscription_mls) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->d_inscription_saleprice
    if (!inscription_list_element->d_inscription_saleprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionSaleprice", inscription_list_element->d_inscription_saleprice) == NULL) {
    goto fail; //String
    }


    // inscription_list_element->d_inscription_rentprice
    if (!inscription_list_element->d_inscription_rentprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInscriptionRentprice", inscription_list_element->d_inscription_rentprice) == NULL) {
    goto fail; //String
    }


    // inscription_list_element->dt_inscription_date
    if(inscription_list_element->dt_inscription_date) {
    if(cJSON_AddStringToObject(item, "dtInscriptionDate", inscription_list_element->dt_inscription_date) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->dt_inscription_expirationdate
    if(inscription_list_element->dt_inscription_expirationdate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionExpirationdate", inscription_list_element->dt_inscription_expirationdate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->dt_inscription_notarydate
    if(inscription_list_element->dt_inscription_notarydate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionNotarydate", inscription_list_element->dt_inscription_notarydate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->b_inscription_isactive
    if (!inscription_list_element->b_inscription_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionIsactive", inscription_list_element->b_inscription_isactive) == NULL) {
    goto fail; //Bool
    }


    // inscription_list_element->b_inscription_archived
    if (!inscription_list_element->b_inscription_archived) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInscriptionArchived", inscription_list_element->b_inscription_archived) == NULL) {
    goto fail; //Bool
    }


    // inscription_list_element->b_inscription_inspection
    if(inscription_list_element->b_inscription_inspection) {
    if(cJSON_AddBoolToObject(item, "bInscriptionInspection", inscription_list_element->b_inscription_inspection) == NULL) {
    goto fail; //Bool
    }
    }


    // inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate
    if(inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedNotaryscheduledate", inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->dt_inscriptionnotauthenticated_transactiondate
    if(inscription_list_element->dt_inscriptionnotauthenticated_transactiondate) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedTransactiondate", inscription_list_element->dt_inscriptionnotauthenticated_transactiondate) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real
    if(inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real) {
    if(cJSON_AddStringToObject(item, "dtInscriptionnotauthenticatedTransactiondateReal", inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->b_inscriptionnotauthenticated_conditional
    if(inscription_list_element->b_inscriptionnotauthenticated_conditional) {
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedConditional", inscription_list_element->b_inscriptionnotauthenticated_conditional) == NULL) {
    goto fail; //Bool
    }
    }


    // inscription_list_element->b_inscriptionnotauthenticated_isactive
    if(inscription_list_element->b_inscriptionnotauthenticated_isactive) {
    if(cJSON_AddBoolToObject(item, "bInscriptionnotauthenticatedIsactive", inscription_list_element->b_inscriptionnotauthenticated_isactive) == NULL) {
    goto fail; //Bool
    }
    }


    // inscription_list_element->s_address_civic
    if(inscription_list_element->s_address_civic) {
    if(cJSON_AddStringToObject(item, "sAddressCivic", inscription_list_element->s_address_civic) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_address_street
    if(inscription_list_element->s_address_street) {
    if(cJSON_AddStringToObject(item, "sAddressStreet", inscription_list_element->s_address_street) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_address_suite
    if(inscription_list_element->s_address_suite) {
    if(cJSON_AddStringToObject(item, "sAddressSuite", inscription_list_element->s_address_suite) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_address_city
    if(inscription_list_element->s_address_city) {
    if(cJSON_AddStringToObject(item, "sAddressCity", inscription_list_element->s_address_city) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_address_zip
    if(inscription_list_element->s_address_zip) {
    if(cJSON_AddStringToObject(item, "sAddressZip", inscription_list_element->s_address_zip) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_province_name_x
    if(inscription_list_element->s_province_name_x) {
    if(cJSON_AddStringToObject(item, "sProvinceNameX", inscription_list_element->s_province_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->s_country_name_x
    if(inscription_list_element->s_country_name_x) {
    if(cJSON_AddStringToObject(item, "sCountryNameX", inscription_list_element->s_country_name_x) == NULL) {
    goto fail; //String
    }
    }


    // inscription_list_element->i_inscriptionnotauthenticated_canceled
    if (!inscription_list_element->i_inscriptionnotauthenticated_canceled) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iInscriptionnotauthenticatedCanceled", inscription_list_element->i_inscriptionnotauthenticated_canceled) == NULL) {
    goto fail; //Numeric
    }


    // inscription_list_element->b_allowed_copyintoinscriptionedm
    if (!inscription_list_element->b_allowed_copyintoinscriptionedm) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAllowedCopyintoinscriptionedm", inscription_list_element->b_allowed_copyintoinscriptionedm) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_list_element_t *inscription_list_element_parseFromJSON(cJSON *inscription_list_elementJSON){

    inscription_list_element_t *inscription_list_element_local_var = NULL;

    // define the local variable for inscription_list_element->e_inscription_step
    ezmax_api_definition__full_field_e_inscription_step__e e_inscription_step_local_nonprim = 0;

    // inscription_list_element->pki_inscription_id
    cJSON *pki_inscription_id = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "pkiInscriptionID");
    if (cJSON_IsNull(pki_inscription_id)) {
        pki_inscription_id = NULL;
    }
    if (!pki_inscription_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_inscription_id))
    {
    goto end; //Numeric
    }

    // inscription_list_element->pki_inscriptionnotauthenticated_id
    cJSON *pki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "pkiInscriptionnotauthenticatedID");
    if (cJSON_IsNull(pki_inscriptionnotauthenticated_id)) {
        pki_inscriptionnotauthenticated_id = NULL;
    }
    if (pki_inscriptionnotauthenticated_id) { 
    if(!cJSON_IsNumber(pki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    }

    // inscription_list_element->fki_inscriptiontype_id
    cJSON *fki_inscriptiontype_id = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "fkiInscriptiontypeID");
    if (cJSON_IsNull(fki_inscriptiontype_id)) {
        fki_inscriptiontype_id = NULL;
    }
    if (!fki_inscriptiontype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptiontype_id))
    {
    goto end; //Numeric
    }

    // inscription_list_element->s_inscriptiontype_name_x
    cJSON *s_inscriptiontype_name_x = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sInscriptiontypeNameX");
    if (cJSON_IsNull(s_inscriptiontype_name_x)) {
        s_inscriptiontype_name_x = NULL;
    }
    if (!s_inscriptiontype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptiontype_name_x))
    {
    goto end; //String
    }

    // inscription_list_element->e_inscription_step
    cJSON *e_inscription_step = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "eInscriptionStep");
    if (cJSON_IsNull(e_inscription_step)) {
        e_inscription_step = NULL;
    }
    if (!e_inscription_step) {
        goto end;
    }

    
    e_inscription_step_local_nonprim = field_e_inscription_step_parseFromJSON(e_inscription_step); //custom

    // inscription_list_element->s_inscription_civicend
    cJSON *s_inscription_civicend = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sInscriptionCivicend");
    if (cJSON_IsNull(s_inscription_civicend)) {
        s_inscription_civicend = NULL;
    }
    if (!s_inscription_civicend) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscription_civicend))
    {
    goto end; //String
    }

    // inscription_list_element->s_inscription_mls
    cJSON *s_inscription_mls = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sInscriptionMLS");
    if (cJSON_IsNull(s_inscription_mls)) {
        s_inscription_mls = NULL;
    }
    if (s_inscription_mls) { 
    if(!cJSON_IsString(s_inscription_mls) && !cJSON_IsNull(s_inscription_mls))
    {
    goto end; //String
    }
    }

    // inscription_list_element->d_inscription_saleprice
    cJSON *d_inscription_saleprice = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dInscriptionSaleprice");
    if (cJSON_IsNull(d_inscription_saleprice)) {
        d_inscription_saleprice = NULL;
    }
    if (!d_inscription_saleprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_saleprice))
    {
    goto end; //String
    }

    // inscription_list_element->d_inscription_rentprice
    cJSON *d_inscription_rentprice = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dInscriptionRentprice");
    if (cJSON_IsNull(d_inscription_rentprice)) {
        d_inscription_rentprice = NULL;
    }
    if (!d_inscription_rentprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_inscription_rentprice))
    {
    goto end; //String
    }

    // inscription_list_element->dt_inscription_date
    cJSON *dt_inscription_date = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionDate");
    if (cJSON_IsNull(dt_inscription_date)) {
        dt_inscription_date = NULL;
    }
    if (dt_inscription_date) { 
    if(!cJSON_IsString(dt_inscription_date) && !cJSON_IsNull(dt_inscription_date))
    {
    goto end; //String
    }
    }

    // inscription_list_element->dt_inscription_expirationdate
    cJSON *dt_inscription_expirationdate = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionExpirationdate");
    if (cJSON_IsNull(dt_inscription_expirationdate)) {
        dt_inscription_expirationdate = NULL;
    }
    if (dt_inscription_expirationdate) { 
    if(!cJSON_IsString(dt_inscription_expirationdate) && !cJSON_IsNull(dt_inscription_expirationdate))
    {
    goto end; //String
    }
    }

    // inscription_list_element->dt_inscription_notarydate
    cJSON *dt_inscription_notarydate = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionNotarydate");
    if (cJSON_IsNull(dt_inscription_notarydate)) {
        dt_inscription_notarydate = NULL;
    }
    if (dt_inscription_notarydate) { 
    if(!cJSON_IsString(dt_inscription_notarydate) && !cJSON_IsNull(dt_inscription_notarydate))
    {
    goto end; //String
    }
    }

    // inscription_list_element->b_inscription_isactive
    cJSON *b_inscription_isactive = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bInscriptionIsactive");
    if (cJSON_IsNull(b_inscription_isactive)) {
        b_inscription_isactive = NULL;
    }
    if (!b_inscription_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_isactive))
    {
    goto end; //Bool
    }

    // inscription_list_element->b_inscription_archived
    cJSON *b_inscription_archived = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bInscriptionArchived");
    if (cJSON_IsNull(b_inscription_archived)) {
        b_inscription_archived = NULL;
    }
    if (!b_inscription_archived) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_inscription_archived))
    {
    goto end; //Bool
    }

    // inscription_list_element->b_inscription_inspection
    cJSON *b_inscription_inspection = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bInscriptionInspection");
    if (cJSON_IsNull(b_inscription_inspection)) {
        b_inscription_inspection = NULL;
    }
    if (b_inscription_inspection) { 
    if(!cJSON_IsBool(b_inscription_inspection))
    {
    goto end; //Bool
    }
    }

    // inscription_list_element->dt_inscriptionnotauthenticated_notaryscheduledate
    cJSON *dt_inscriptionnotauthenticated_notaryscheduledate = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionnotauthenticatedNotaryscheduledate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate)) {
        dt_inscriptionnotauthenticated_notaryscheduledate = NULL;
    }
    if (dt_inscriptionnotauthenticated_notaryscheduledate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_notaryscheduledate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate))
    {
    goto end; //String
    }
    }

    // inscription_list_element->dt_inscriptionnotauthenticated_transactiondate
    cJSON *dt_inscriptionnotauthenticated_transactiondate = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionnotauthenticatedTransactiondate");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate)) {
        dt_inscriptionnotauthenticated_transactiondate = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_transactiondate) && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate))
    {
    goto end; //String
    }
    }

    // inscription_list_element->dt_inscriptionnotauthenticated_transactiondate_real
    cJSON *dt_inscriptionnotauthenticated_transactiondate_real = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "dtInscriptionnotauthenticatedTransactiondateReal");
    if (cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real)) {
        dt_inscriptionnotauthenticated_transactiondate_real = NULL;
    }
    if (dt_inscriptionnotauthenticated_transactiondate_real) { 
    if(!cJSON_IsString(dt_inscriptionnotauthenticated_transactiondate_real) && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real))
    {
    goto end; //String
    }
    }

    // inscription_list_element->b_inscriptionnotauthenticated_conditional
    cJSON *b_inscriptionnotauthenticated_conditional = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bInscriptionnotauthenticatedConditional");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_conditional)) {
        b_inscriptionnotauthenticated_conditional = NULL;
    }
    if (b_inscriptionnotauthenticated_conditional) { 
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_conditional))
    {
    goto end; //Bool
    }
    }

    // inscription_list_element->b_inscriptionnotauthenticated_isactive
    cJSON *b_inscriptionnotauthenticated_isactive = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bInscriptionnotauthenticatedIsactive");
    if (cJSON_IsNull(b_inscriptionnotauthenticated_isactive)) {
        b_inscriptionnotauthenticated_isactive = NULL;
    }
    if (b_inscriptionnotauthenticated_isactive) { 
    if(!cJSON_IsBool(b_inscriptionnotauthenticated_isactive))
    {
    goto end; //Bool
    }
    }

    // inscription_list_element->s_address_civic
    cJSON *s_address_civic = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sAddressCivic");
    if (cJSON_IsNull(s_address_civic)) {
        s_address_civic = NULL;
    }
    if (s_address_civic) { 
    if(!cJSON_IsString(s_address_civic) && !cJSON_IsNull(s_address_civic))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_address_street
    cJSON *s_address_street = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sAddressStreet");
    if (cJSON_IsNull(s_address_street)) {
        s_address_street = NULL;
    }
    if (s_address_street) { 
    if(!cJSON_IsString(s_address_street) && !cJSON_IsNull(s_address_street))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_address_suite
    cJSON *s_address_suite = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sAddressSuite");
    if (cJSON_IsNull(s_address_suite)) {
        s_address_suite = NULL;
    }
    if (s_address_suite) { 
    if(!cJSON_IsString(s_address_suite) && !cJSON_IsNull(s_address_suite))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_address_city
    cJSON *s_address_city = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sAddressCity");
    if (cJSON_IsNull(s_address_city)) {
        s_address_city = NULL;
    }
    if (s_address_city) { 
    if(!cJSON_IsString(s_address_city) && !cJSON_IsNull(s_address_city))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_address_zip
    cJSON *s_address_zip = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sAddressZip");
    if (cJSON_IsNull(s_address_zip)) {
        s_address_zip = NULL;
    }
    if (s_address_zip) { 
    if(!cJSON_IsString(s_address_zip) && !cJSON_IsNull(s_address_zip))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_province_name_x
    cJSON *s_province_name_x = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sProvinceNameX");
    if (cJSON_IsNull(s_province_name_x)) {
        s_province_name_x = NULL;
    }
    if (s_province_name_x) { 
    if(!cJSON_IsString(s_province_name_x) && !cJSON_IsNull(s_province_name_x))
    {
    goto end; //String
    }
    }

    // inscription_list_element->s_country_name_x
    cJSON *s_country_name_x = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "sCountryNameX");
    if (cJSON_IsNull(s_country_name_x)) {
        s_country_name_x = NULL;
    }
    if (s_country_name_x) { 
    if(!cJSON_IsString(s_country_name_x) && !cJSON_IsNull(s_country_name_x))
    {
    goto end; //String
    }
    }

    // inscription_list_element->i_inscriptionnotauthenticated_canceled
    cJSON *i_inscriptionnotauthenticated_canceled = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "iInscriptionnotauthenticatedCanceled");
    if (cJSON_IsNull(i_inscriptionnotauthenticated_canceled)) {
        i_inscriptionnotauthenticated_canceled = NULL;
    }
    if (!i_inscriptionnotauthenticated_canceled) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_inscriptionnotauthenticated_canceled))
    {
    goto end; //Numeric
    }

    // inscription_list_element->b_allowed_copyintoinscriptionedm
    cJSON *b_allowed_copyintoinscriptionedm = cJSON_GetObjectItemCaseSensitive(inscription_list_elementJSON, "bAllowedCopyintoinscriptionedm");
    if (cJSON_IsNull(b_allowed_copyintoinscriptionedm)) {
        b_allowed_copyintoinscriptionedm = NULL;
    }
    if (!b_allowed_copyintoinscriptionedm) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_allowed_copyintoinscriptionedm))
    {
    goto end; //Bool
    }


    inscription_list_element_local_var = inscription_list_element_create_internal (
        pki_inscription_id->valuedouble,
        pki_inscriptionnotauthenticated_id ? pki_inscriptionnotauthenticated_id->valuedouble : 0,
        fki_inscriptiontype_id->valuedouble,
        strdup(s_inscriptiontype_name_x->valuestring),
        e_inscription_step_local_nonprim,
        strdup(s_inscription_civicend->valuestring),
        s_inscription_mls && !cJSON_IsNull(s_inscription_mls) ? strdup(s_inscription_mls->valuestring) : NULL,
        strdup(d_inscription_saleprice->valuestring),
        strdup(d_inscription_rentprice->valuestring),
        dt_inscription_date && !cJSON_IsNull(dt_inscription_date) ? strdup(dt_inscription_date->valuestring) : NULL,
        dt_inscription_expirationdate && !cJSON_IsNull(dt_inscription_expirationdate) ? strdup(dt_inscription_expirationdate->valuestring) : NULL,
        dt_inscription_notarydate && !cJSON_IsNull(dt_inscription_notarydate) ? strdup(dt_inscription_notarydate->valuestring) : NULL,
        b_inscription_isactive->valueint,
        b_inscription_archived->valueint,
        b_inscription_inspection ? b_inscription_inspection->valueint : 0,
        dt_inscriptionnotauthenticated_notaryscheduledate && !cJSON_IsNull(dt_inscriptionnotauthenticated_notaryscheduledate) ? strdup(dt_inscriptionnotauthenticated_notaryscheduledate->valuestring) : NULL,
        dt_inscriptionnotauthenticated_transactiondate && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate) ? strdup(dt_inscriptionnotauthenticated_transactiondate->valuestring) : NULL,
        dt_inscriptionnotauthenticated_transactiondate_real && !cJSON_IsNull(dt_inscriptionnotauthenticated_transactiondate_real) ? strdup(dt_inscriptionnotauthenticated_transactiondate_real->valuestring) : NULL,
        b_inscriptionnotauthenticated_conditional ? b_inscriptionnotauthenticated_conditional->valueint : 0,
        b_inscriptionnotauthenticated_isactive ? b_inscriptionnotauthenticated_isactive->valueint : 0,
        s_address_civic && !cJSON_IsNull(s_address_civic) ? strdup(s_address_civic->valuestring) : NULL,
        s_address_street && !cJSON_IsNull(s_address_street) ? strdup(s_address_street->valuestring) : NULL,
        s_address_suite && !cJSON_IsNull(s_address_suite) ? strdup(s_address_suite->valuestring) : NULL,
        s_address_city && !cJSON_IsNull(s_address_city) ? strdup(s_address_city->valuestring) : NULL,
        s_address_zip && !cJSON_IsNull(s_address_zip) ? strdup(s_address_zip->valuestring) : NULL,
        s_province_name_x && !cJSON_IsNull(s_province_name_x) ? strdup(s_province_name_x->valuestring) : NULL,
        s_country_name_x && !cJSON_IsNull(s_country_name_x) ? strdup(s_country_name_x->valuestring) : NULL,
        i_inscriptionnotauthenticated_canceled->valuedouble,
        b_allowed_copyintoinscriptionedm->valueint
        );

    return inscription_list_element_local_var;
end:
    if (e_inscription_step_local_nonprim) {
        e_inscription_step_local_nonprim = 0;
    }
    return NULL;

}
