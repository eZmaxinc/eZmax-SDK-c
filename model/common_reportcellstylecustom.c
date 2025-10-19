#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportcellstylecustom.h"



static common_reportcellstylecustom_t *common_reportcellstylecustom_create_internal(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment,
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight,
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline
    ) {
    common_reportcellstylecustom_t *common_reportcellstylecustom_local_var = malloc(sizeof(common_reportcellstylecustom_t));
    if (!common_reportcellstylecustom_local_var) {
        return NULL;
    }
    common_reportcellstylecustom_local_var->b_reportcellstyle_bordertop = b_reportcellstyle_bordertop;
    common_reportcellstylecustom_local_var->b_reportcellstyle_borderbottom = b_reportcellstyle_borderbottom;
    common_reportcellstylecustom_local_var->b_reportcellstyle_borderleft = b_reportcellstyle_borderleft;
    common_reportcellstylecustom_local_var->b_reportcellstyle_borderright = b_reportcellstyle_borderright;
    common_reportcellstylecustom_local_var->e_reportcell_horizontalalignment = e_reportcell_horizontalalignment;
    common_reportcellstylecustom_local_var->e_reportcell_verticalalignment = e_reportcell_verticalalignment;
    common_reportcellstylecustom_local_var->e_reportcell_fontweight = e_reportcell_fontweight;
    common_reportcellstylecustom_local_var->e_reportcell_fontunderline = e_reportcell_fontunderline;

    common_reportcellstylecustom_local_var->_library_owned = 1;
    return common_reportcellstylecustom_local_var;
}

__attribute__((deprecated)) common_reportcellstylecustom_t *common_reportcellstylecustom_create(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment,
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight,
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline
    ) {
    return common_reportcellstylecustom_create_internal (
        b_reportcellstyle_bordertop,
        b_reportcellstyle_borderbottom,
        b_reportcellstyle_borderleft,
        b_reportcellstyle_borderright,
        e_reportcell_horizontalalignment,
        e_reportcell_verticalalignment,
        e_reportcell_fontweight,
        e_reportcell_fontunderline
        );
}

void common_reportcellstylecustom_free(common_reportcellstylecustom_t *common_reportcellstylecustom) {
    if(NULL == common_reportcellstylecustom){
        return ;
    }
    if(common_reportcellstylecustom->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportcellstylecustom_free");
        return ;
    }
    listEntry_t *listEntry;
    free(common_reportcellstylecustom);
}

cJSON *common_reportcellstylecustom_convertToJSON(common_reportcellstylecustom_t *common_reportcellstylecustom) {
    cJSON *item = cJSON_CreateObject();

    // common_reportcellstylecustom->b_reportcellstyle_bordertop
    if(common_reportcellstylecustom->b_reportcellstyle_bordertop) {
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBordertop", common_reportcellstylecustom->b_reportcellstyle_bordertop) == NULL) {
    goto fail; //Bool
    }
    }


    // common_reportcellstylecustom->b_reportcellstyle_borderbottom
    if(common_reportcellstylecustom->b_reportcellstyle_borderbottom) {
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderbottom", common_reportcellstylecustom->b_reportcellstyle_borderbottom) == NULL) {
    goto fail; //Bool
    }
    }


    // common_reportcellstylecustom->b_reportcellstyle_borderleft
    if(common_reportcellstylecustom->b_reportcellstyle_borderleft) {
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderleft", common_reportcellstylecustom->b_reportcellstyle_borderleft) == NULL) {
    goto fail; //Bool
    }
    }


    // common_reportcellstylecustom->b_reportcellstyle_borderright
    if(common_reportcellstylecustom->b_reportcellstyle_borderright) {
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderright", common_reportcellstylecustom->b_reportcellstyle_borderright) == NULL) {
    goto fail; //Bool
    }
    }


    // common_reportcellstylecustom->e_reportcell_horizontalalignment
    if(common_reportcellstylecustom->e_reportcell_horizontalalignment != ezmax_api_definition__full_enum_horizontalalignment__NULL) {
    cJSON *e_reportcell_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(common_reportcellstylecustom->e_reportcell_horizontalalignment);
    if(e_reportcell_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellHorizontalalignment", e_reportcell_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // common_reportcellstylecustom->e_reportcell_verticalalignment
    if(common_reportcellstylecustom->e_reportcell_verticalalignment != ezmax_api_definition__full_enum_verticalalignment__NULL) {
    cJSON *e_reportcell_verticalalignment_local_JSON = enum_verticalalignment_convertToJSON(common_reportcellstylecustom->e_reportcell_verticalalignment);
    if(e_reportcell_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellVerticalalignment", e_reportcell_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // common_reportcellstylecustom->e_reportcell_fontweight
    if(common_reportcellstylecustom->e_reportcell_fontweight != ezmax_api_definition__full_enum_fontweight__NULL) {
    cJSON *e_reportcell_fontweight_local_JSON = enum_fontweight_convertToJSON(common_reportcellstylecustom->e_reportcell_fontweight);
    if(e_reportcell_fontweight_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontweight", e_reportcell_fontweight_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // common_reportcellstylecustom->e_reportcell_fontunderline
    if(common_reportcellstylecustom->e_reportcell_fontunderline != ezmax_api_definition__full_enum_fontunderline__NULL) {
    cJSON *e_reportcell_fontunderline_local_JSON = enum_fontunderline_convertToJSON(common_reportcellstylecustom->e_reportcell_fontunderline);
    if(e_reportcell_fontunderline_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontunderline", e_reportcell_fontunderline_local_JSON);
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

common_reportcellstylecustom_t *common_reportcellstylecustom_parseFromJSON(cJSON *common_reportcellstylecustomJSON){

    common_reportcellstylecustom_t *common_reportcellstylecustom_local_var = NULL;

    // define the local variable for common_reportcellstylecustom->e_reportcell_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment_local_nonprim = 0;

    // define the local variable for common_reportcellstylecustom->e_reportcell_verticalalignment
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment_local_nonprim = 0;

    // define the local variable for common_reportcellstylecustom->e_reportcell_fontweight
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight_local_nonprim = 0;

    // define the local variable for common_reportcellstylecustom->e_reportcell_fontunderline
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline_local_nonprim = 0;

    // common_reportcellstylecustom->b_reportcellstyle_bordertop
    cJSON *b_reportcellstyle_bordertop = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "bReportcellstyleBordertop");
    if (cJSON_IsNull(b_reportcellstyle_bordertop)) {
        b_reportcellstyle_bordertop = NULL;
    }
    if (b_reportcellstyle_bordertop) { 
    if(!cJSON_IsBool(b_reportcellstyle_bordertop))
    {
    goto end; //Bool
    }
    }

    // common_reportcellstylecustom->b_reportcellstyle_borderbottom
    cJSON *b_reportcellstyle_borderbottom = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "bReportcellstyleBorderbottom");
    if (cJSON_IsNull(b_reportcellstyle_borderbottom)) {
        b_reportcellstyle_borderbottom = NULL;
    }
    if (b_reportcellstyle_borderbottom) { 
    if(!cJSON_IsBool(b_reportcellstyle_borderbottom))
    {
    goto end; //Bool
    }
    }

    // common_reportcellstylecustom->b_reportcellstyle_borderleft
    cJSON *b_reportcellstyle_borderleft = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "bReportcellstyleBorderleft");
    if (cJSON_IsNull(b_reportcellstyle_borderleft)) {
        b_reportcellstyle_borderleft = NULL;
    }
    if (b_reportcellstyle_borderleft) { 
    if(!cJSON_IsBool(b_reportcellstyle_borderleft))
    {
    goto end; //Bool
    }
    }

    // common_reportcellstylecustom->b_reportcellstyle_borderright
    cJSON *b_reportcellstyle_borderright = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "bReportcellstyleBorderright");
    if (cJSON_IsNull(b_reportcellstyle_borderright)) {
        b_reportcellstyle_borderright = NULL;
    }
    if (b_reportcellstyle_borderright) { 
    if(!cJSON_IsBool(b_reportcellstyle_borderright))
    {
    goto end; //Bool
    }
    }

    // common_reportcellstylecustom->e_reportcell_horizontalalignment
    cJSON *e_reportcell_horizontalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "eReportcellHorizontalalignment");
    if (cJSON_IsNull(e_reportcell_horizontalalignment)) {
        e_reportcell_horizontalalignment = NULL;
    }
    if (e_reportcell_horizontalalignment) { 
    e_reportcell_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_reportcell_horizontalalignment); //custom
    }

    // common_reportcellstylecustom->e_reportcell_verticalalignment
    cJSON *e_reportcell_verticalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "eReportcellVerticalalignment");
    if (cJSON_IsNull(e_reportcell_verticalalignment)) {
        e_reportcell_verticalalignment = NULL;
    }
    if (e_reportcell_verticalalignment) { 
    e_reportcell_verticalalignment_local_nonprim = enum_verticalalignment_parseFromJSON(e_reportcell_verticalalignment); //custom
    }

    // common_reportcellstylecustom->e_reportcell_fontweight
    cJSON *e_reportcell_fontweight = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "eReportcellFontweight");
    if (cJSON_IsNull(e_reportcell_fontweight)) {
        e_reportcell_fontweight = NULL;
    }
    if (e_reportcell_fontweight) { 
    e_reportcell_fontweight_local_nonprim = enum_fontweight_parseFromJSON(e_reportcell_fontweight); //custom
    }

    // common_reportcellstylecustom->e_reportcell_fontunderline
    cJSON *e_reportcell_fontunderline = cJSON_GetObjectItemCaseSensitive(common_reportcellstylecustomJSON, "eReportcellFontunderline");
    if (cJSON_IsNull(e_reportcell_fontunderline)) {
        e_reportcell_fontunderline = NULL;
    }
    if (e_reportcell_fontunderline) { 
    e_reportcell_fontunderline_local_nonprim = enum_fontunderline_parseFromJSON(e_reportcell_fontunderline); //custom
    }


    common_reportcellstylecustom_local_var = common_reportcellstylecustom_create_internal (
        b_reportcellstyle_bordertop ? b_reportcellstyle_bordertop->valueint : 0,
        b_reportcellstyle_borderbottom ? b_reportcellstyle_borderbottom->valueint : 0,
        b_reportcellstyle_borderleft ? b_reportcellstyle_borderleft->valueint : 0,
        b_reportcellstyle_borderright ? b_reportcellstyle_borderright->valueint : 0,
        e_reportcell_horizontalalignment ? e_reportcell_horizontalalignment_local_nonprim : 0,
        e_reportcell_verticalalignment ? e_reportcell_verticalalignment_local_nonprim : 0,
        e_reportcell_fontweight ? e_reportcell_fontweight_local_nonprim : 0,
        e_reportcell_fontunderline ? e_reportcell_fontunderline_local_nonprim : 0
        );

    return common_reportcellstylecustom_local_var;
end:
    if (e_reportcell_horizontalalignment_local_nonprim) {
        e_reportcell_horizontalalignment_local_nonprim = 0;
    }
    if (e_reportcell_verticalalignment_local_nonprim) {
        e_reportcell_verticalalignment_local_nonprim = 0;
    }
    if (e_reportcell_fontweight_local_nonprim) {
        e_reportcell_fontweight_local_nonprim = 0;
    }
    if (e_reportcell_fontunderline_local_nonprim) {
        e_reportcell_fontunderline_local_nonprim = 0;
    }
    return NULL;

}
