# customer_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_customer_id** | **int** | The unique ID of the Customer. | 
**fki_company_id** | **int** | The unique ID of the Company | 
**fki_customergroup_id** | **int** | The unique ID of the Customergroup | [optional] 
**s_customer_name** | **char \*** | The name of the Customer | 
**s_customer_note** | **char \*** | A note for the Customer | [optional] 
**fki_contactinformations_id** | **int** | The unique ID of the Contactinformations | 
**fki_contactcontainer_id** | **int** | The unique ID of the Contactcontainer | 
**fki_image_id** | **int** | The unique ID of the Image | [optional] 
**fki_glaccountcontainer_id** | **int** | The unique ID of the Glaccountcontainer | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**fki_department_id** | **int** | The unique ID of the Department | 
**fki_paymentmethod_id** | **int** | The unique ID of the Paymentmethod | 
**fki_electronicfundstransferbankaccount_id** | **int** | The unique ID of the Electronicfundstransferbankaccount | [optional] 
**fki_electronicfundstransferbankaccount_id_directdebit** | **int** | The unique ID of the Electronicfundstransferbankaccount | [optional] 
**fki_sendingmethod_id** | **int** | The unique ID of the Sendingmethod | 
**fki_taxassignment_id** | **int** | The unique ID of the Taxassignment.  Valid values:  |Value|Description| |-|-| |1|No tax| |2|GST| |3|HST (ON)| |4|HST (NB)| |5|HST (NS)| |6|HST (NL)| |7|HST (PE)| |8|GST + QST (QC)| |9|GST + QST (QC) Non-Recoverable| |10|GST + PST (BC)| |11|GST + PST (SK)| |12|GST + RST (MB)| |13|GST + PST (BC) Non-Recoverable| |14|GST + PST (SK) Non-Recoverable| |15|GST + RST (MB) Non-Recoverable| | 
**fki_attendancestatus_id** | **int** | The unique ID of the Attendancestatus | 
**fki_agent_id_variableexpensechargeto** | **int** | The unique ID of the Agent. | [optional] 
**fki_broker_id_variableexpensechargeto** | **int** | The unique ID of the Broker. | [optional] 
**fki_customer_id_variableexpensechargeto** | **int** | The unique ID of the Customer. | [optional] 
**fki_glaccountcontainer_id_variableexpensechargeto** | **int** | The unique ID of the Glaccountcontainer | [optional] 
**fki_agent_id_supplychargechargeto** | **int** | The unique ID of the Agent. | [optional] 
**fki_broker_id_supplychargechargeto** | **int** | The unique ID of the Broker. | [optional] 
**fki_customer_id_supplychargechargeto** | **int** | The unique ID of the Customer. | [optional] 
**fki_glaccountcontainer_id_supplychargechargeto** | **int** | The unique ID of the Glaccountcontainer | [optional] 
**fki_invoicealternatelogo_id** | **int** | The unique ID of the Invoicealternatelogo | [optional] 
**fki_synchronizationlinkserver_id** | **int** | The unique ID of the Synchronizationlinkserver | [optional] 
**efki_user_id** | **int** | The unique ID of the User | [optional] 
**efks_customer_code** | **char \*** | The code of the Customer | [optional] 
**s_customer_code** | **char \*** | The code of the Customer | 
**d_customer_fulltimeequivalent** | **char \*** | The fulltimeequivalent of the Customer | [optional] 
**i_customer_photocopiercode** | **int** | The photocopiercode of the Customer | 
**i_customer_longdistancecode** | **int** | The longdistancecode of the Customer | 
**i_customer_timewindowstart** | **int** | The timewindowstart of the Customer | 
**i_customer_timewindowend** | **int** | The timewindowend of the Customer | 
**d_customer_minimumchargeableinterests** | **char \*** | The minimumchargeableinterests of the Customer | 
**dt_customer_birthdate** | **char \*** | The birthdate of the Customer | [optional] 
**dt_customer_transfer** | **char \*** | The transfer of the Customer | 
**dt_customer_transferappointment** | **char \*** | The transferappointment of the Customer | 
**dt_customer_transfersurvey** | **char \*** | The transfersurvey of the Customer | [optional] 
**b_customer_isactive** | **int** | Whether the customer is active or not | 
**b_customer_variableexpensefinanced** | **int** | Whether if it&#39;s an variableexpensefinanced | 
**b_customer_variableexpensefinancedtaxes** | **int** | Whether if it&#39;s an variableexpensefinancedtaxes | 
**b_customer_supplychargefinanced** | **int** | Whether if it&#39;s an supplychargefinanced | 
**b_customer_supplychargefinancedtaxes** | **int** | Whether if it&#39;s an supplychargefinancedtaxes | 
**b_customer_attendance** | **int** | Whether if it&#39;s an attendance | 
**e_customer_type** | **field_e_customer_type_t \*** |  | 
**e_customer_marketingcorrespondence** | **field_e_customer_marketingcorrespondence_t \*** |  | 
**b_customer_blackcopycarbon** | **int** | Whether if it&#39;s an blackcopycarbon | 
**b_customer_unsubscribeinfo** | **int** | Whether if it&#39;s an unsubscribeinfo | 
**t_customer_comment** | **char \*** | The comment of the Customer | 
**importid** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


