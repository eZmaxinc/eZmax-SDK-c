#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_reportcellstyle.h"



static common_reportcellstyle_t *common_reportcellstyle_create_internal(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment,
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight,
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline
    ) {
    common_reportcellstyle_t *common_reportcellstyle_local_var = malloc(sizeof(common_reportcellstyle_t));
    if (!common_reportcellstyle_local_var) {
        return NULL;
    }
    common_reportcellstyle_local_var->b_reportcellstyle_bordertop = b_reportcellstyle_bordertop;
    common_reportcellstyle_local_var->b_reportcellstyle_borderbottom = b_reportcellstyle_borderbottom;
    common_reportcellstyle_local_var->b_reportcellstyle_borderleft = b_reportcellstyle_borderleft;
    common_reportcellstyle_local_var->b_reportcellstyle_borderright = b_reportcellstyle_borderright;
    common_reportcellstyle_local_var->e_reportcell_horizontalalignment = e_reportcell_horizontalalignment;
    common_reportcellstyle_local_var->e_reportcell_verticalalignment = e_reportcell_verticalalignment;
    common_reportcellstyle_local_var->e_reportcell_fontweight = e_reportcell_fontweight;
    common_reportcellstyle_local_var->e_reportcell_fontunderline = e_reportcell_fontunderline;

    common_reportcellstyle_local_var->_library_owned = 1;
    return common_reportcellstyle_local_var;
}

__attribute__((deprecated)) common_reportcellstyle_t *common_reportcellstyle_create(
    int b_reportcellstyle_bordertop,
    int b_reportcellstyle_borderbottom,
    int b_reportcellstyle_borderleft,
    int b_reportcellstyle_borderright,
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment,
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment,
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight,
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline
    ) {
    return common_reportcellstyle_create_internal (
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

void common_reportcellstyle_free(common_reportcellstyle_t *common_reportcellstyle) {
    if(NULL == common_reportcellstyle){
        return ;
    }
    if(common_reportcellstyle->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_reportcellstyle_free");
        return ;
    }
    listEntry_t *listEntry;
    free(common_reportcellstyle);
}

cJSON *common_reportcellstyle_convertToJSON(common_reportcellstyle_t *common_reportcellstyle) {
    cJSON *item = cJSON_CreateObject();

    // common_reportcellstyle->b_reportcellstyle_bordertop
    if (!common_reportcellstyle->b_reportcellstyle_bordertop) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBordertop", common_reportcellstyle->b_reportcellstyle_bordertop) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderbottom
    if (!common_reportcellstyle->b_reportcellstyle_borderbottom) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderbottom", common_reportcellstyle->b_reportcellstyle_borderbottom) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderleft
    if (!common_reportcellstyle->b_reportcellstyle_borderleft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderleft", common_reportcellstyle->b_reportcellstyle_borderleft) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->b_reportcellstyle_borderright
    if (!common_reportcellstyle->b_reportcellstyle_borderright) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bReportcellstyleBorderright", common_reportcellstyle->b_reportcellstyle_borderright) == NULL) {
    goto fail; //Bool
    }


    // common_reportcellstyle->e_reportcell_horizontalalignment
    if (ezmax_api_definition__full_enum_horizontalalignment__NULL == common_reportcellstyle->e_reportcell_horizontalalignment) {
        goto fail;
    }
    cJSON *e_reportcell_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(common_reportcellstyle->e_reportcell_horizontalalignment);
    if(e_reportcell_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellHorizontalalignment", e_reportcell_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_verticalalignment
    if (ezmax_api_definition__full_enum_verticalalignment__NULL == common_reportcellstyle->e_reportcell_verticalalignment) {
        goto fail;
    }
    cJSON *e_reportcell_verticalalignment_local_JSON = enum_verticalalignment_convertToJSON(common_reportcellstyle->e_reportcell_verticalalignment);
    if(e_reportcell_verticalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellVerticalalignment", e_reportcell_verticalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_fontweight
    if (ezmax_api_definition__full_enum_fontweight__NULL == common_reportcellstyle->e_reportcell_fontweight) {
        goto fail;
    }
    cJSON *e_reportcell_fontweight_local_JSON = enum_fontweight_convertToJSON(common_reportcellstyle->e_reportcell_fontweight);
    if(e_reportcell_fontweight_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontweight", e_reportcell_fontweight_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_reportcellstyle->e_reportcell_fontunderline
    if (ezmax_api_definition__full_enum_fontunderline__NULL == common_reportcellstyle->e_reportcell_fontunderline) {
        goto fail;
    }
    cJSON *e_reportcell_fontunderline_local_JSON = enum_fontunderline_convertToJSON(common_reportcellstyle->e_reportcell_fontunderline);
    if(e_reportcell_fontunderline_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eReportcellFontunderline", e_reportcell_fontunderline_local_JSON);
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

common_reportcellstyle_t *common_reportcellstyle_parseFromJSON(cJSON *common_reportcellstyleJSON){

    common_reportcellstyle_t *common_reportcellstyle_local_var = NULL;

    // define the local variable for common_reportcellstyle->e_reportcell_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_reportcell_horizontalalignment_local_nonprim = 0;

    // define the local variable for common_reportcellstyle->e_reportcell_verticalalignment
    ezmax_api_definition__full_enum_verticalalignment__e e_reportcell_verticalalignment_local_nonprim = 0;

    // define the local variable for common_reportcellstyle->e_reportcell_fontweight
    ezmax_api_definition__full_enum_fontweight__e e_reportcell_fontweight_local_nonprim = 0;

    // define the local variable for common_reportcellstyle->e_reportcell_fontunderline
    ezmax_api_definition__full_enum_fontunderline__e e_reportcell_fontunderline_local_nonprim = 0;

    // common_reportcellstyle->b_reportcellstyle_bordertop
    cJSON *b_reportcellstyle_bordertop = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBordertop");
    if (cJSON_IsNull(b_reportcellstyle_bordertop)) {
        b_reportcellstyle_bordertop = NULL;
    }
    if (!b_reportcellstyle_bordertop) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_bordertop))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderbottom
    cJSON *b_reportcellstyle_borderbottom = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderbottom");
    if (cJSON_IsNull(b_reportcellstyle_borderbottom)) {
        b_reportcellstyle_borderbottom = NULL;
    }
    if (!b_reportcellstyle_borderbottom) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderbottom))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderleft
    cJSON *b_reportcellstyle_borderleft = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderleft");
    if (cJSON_IsNull(b_reportcellstyle_borderleft)) {
        b_reportcellstyle_borderleft = NULL;
    }
    if (!b_reportcellstyle_borderleft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderleft))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->b_reportcellstyle_borderright
    cJSON *b_reportcellstyle_borderright = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "bReportcellstyleBorderright");
    if (cJSON_IsNull(b_reportcellstyle_borderright)) {
        b_reportcellstyle_borderright = NULL;
    }
    if (!b_reportcellstyle_borderright) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_reportcellstyle_borderright))
    {
    goto end; //Bool
    }

    // common_reportcellstyle->e_reportcell_horizontalalignment
    cJSON *e_reportcell_horizontalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellHorizontalalignment");
    if (cJSON_IsNull(e_reportcell_horizontalalignment)) {
        e_reportcell_horizontalalignment = NULL;
    }
    if (!e_reportcell_horizontalalignment) {
        goto end;
    }

    
    e_reportcell_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_reportcell_horizontalalignment); //custom

    // common_reportcellstyle->e_reportcell_verticalalignment
    cJSON *e_reportcell_verticalalignment = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellVerticalalignment");
    if (cJSON_IsNull(e_reportcell_verticalalignment)) {
        e_reportcell_verticalalignment = NULL;
    }
    if (!e_reportcell_verticalalignment) {
        goto end;
    }

    
    e_reportcell_verticalalignment_local_nonprim = enum_verticalalignment_parseFromJSON(e_reportcell_verticalalignment); //custom

    // common_reportcellstyle->e_reportcell_fontweight
    cJSON *e_reportcell_fontweight = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellFontweight");
    if (cJSON_IsNull(e_reportcell_fontweight)) {
        e_reportcell_fontweight = NULL;
    }
    if (!e_reportcell_fontweight) {
        goto end;
    }

    
    e_reportcell_fontweight_local_nonprim = enum_fontweight_parseFromJSON(e_reportcell_fontweight); //custom

    // common_reportcellstyle->e_reportcell_fontunderline
    cJSON *e_reportcell_fontunderline = cJSON_GetObjectItemCaseSensitive(common_reportcellstyleJSON, "eReportcellFontunderline");
    if (cJSON_IsNull(e_reportcell_fontunderline)) {
        e_reportcell_fontunderline = NULL;
    }
    if (!e_reportcell_fontunderline) {
        goto end;
    }

    
    e_reportcell_fontunderline_local_nonprim = enum_fontunderline_parseFromJSON(e_reportcell_fontunderline); //custom


    common_reportcellstyle_local_var = common_reportcellstyle_create_internal (
        b_reportcellstyle_bordertop->valueint,
        b_reportcellstyle_borderbottom->valueint,
        b_reportcellstyle_borderleft->valueint,
        b_reportcellstyle_borderright->valueint,
        e_reportcell_horizontalalignment_local_nonprim,
        e_reportcell_verticalalignment_local_nonprim,
        e_reportcell_fontweight_local_nonprim,
        e_reportcell_fontunderline_local_nonprim
        );

    return common_reportcellstyle_local_var;
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
