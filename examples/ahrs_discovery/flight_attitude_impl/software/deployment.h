#ifndef __OCARINA_GENERATED_DEPLOYMENT_H_
#define __OCARINA_GENERATED_DEPLOYMENT_H_ 
#include <po_hi_types.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

#define __PO_HI_MY_NODE software_k

#define __po_hi_accelero_thread_nb_ports 6

#define __po_hi_magneto_thread_nb_ports 6

#define __po_hi_gyro_thread_nb_ports 6

#define __po_hi_attitude_calculation_thread_nb_ports 9

/*  For each node in the distributed application add an enumerator*/

typedef enum
{
  software_k = 0
} __po_hi_node_t;

typedef enum
{
  invalid_protocol = -1
} __po_hi_protocol_t;

/*  For each thread in the distributed application nodes, add an enumerator*/

typedef enum
{
  software_accelero_thread_k_entity = 0,
  software_magneto_thread_k_entity = 1,
  software_gyro_thread_k_entity = 2,
  software_attitude_calculation_thread_k_entity = 3,
  invalid_entity = -1
} __po_hi_entity_t;

typedef enum
{
  software_accelero_thread_k = 0,
  software_magneto_thread_k = 1,
  software_gyro_thread_k = 2,
  software_attitude_calculation_thread_k = 3,
  invalid_task_id = -1
} __po_hi_task_id;

typedef enum
{
  invalid_device_id = -1
} __po_hi_device_id;

typedef enum
{
  invalid_bus_id = -1,
  bus_i2c_bus = 0,
  bus_spi_bus = 1
} __po_hi_bus_id;

#define __PO_HI_NB_TASKS 4

#define __PO_HI_TASKS_STACK 5632

#define __PO_HI_NB_PROTECTED 0

#define __PO_HI_NB_NODES 1

#define __PO_HI_NB_ENTITIES 4

#define __PO_HI_NB_PORTS 27

typedef enum
{
  accelero_thread_global_acc_in_data_x = 0,
  accelero_thread_global_acc_in_data_y = 1,
  accelero_thread_global_acc_in_data_z = 2,
  accelero_thread_global_acc_out_data_x = 3,
  accelero_thread_global_acc_out_data_y = 4,
  accelero_thread_global_acc_out_data_z = 5,
  magneto_thread_global_mag_in_data_x = 6,
  magneto_thread_global_mag_in_data_y = 7,
  magneto_thread_global_mag_in_data_z = 8,
  magneto_thread_global_mag_out_data_x = 9,
  magneto_thread_global_mag_out_data_y = 10,
  magneto_thread_global_mag_out_data_z = 11,
  gyro_thread_global_gyro_in_data_x = 12,
  gyro_thread_global_gyro_in_data_y = 13,
  gyro_thread_global_gyro_in_data_z = 14,
  gyro_thread_global_gyro_out_data_x = 15,
  gyro_thread_global_gyro_out_data_y = 16,
  gyro_thread_global_gyro_out_data_z = 17,
  attitude_calculation_thread_global_acc_in_data_x = 18,
  attitude_calculation_thread_global_acc_in_data_y = 19,
  attitude_calculation_thread_global_acc_in_data_z = 20,
  attitude_calculation_thread_global_mag_in_data_x = 21,
  attitude_calculation_thread_global_mag_in_data_y = 22,
  attitude_calculation_thread_global_mag_in_data_z = 23,
  attitude_calculation_thread_global_gyro_in_data_x = 24,
  attitude_calculation_thread_global_gyro_in_data_y = 25,
  attitude_calculation_thread_global_gyro_in_data_z = 26,
  invalid_port_t = -1,
  constant_out_identifier = 28
} __po_hi_port_t;

typedef enum
{
  accelero_thread_local_acc_in_data_x = 0,
  accelero_thread_local_acc_in_data_y = 1,
  accelero_thread_local_acc_in_data_z = 2,
  accelero_thread_local_acc_out_data_x = 3,
  accelero_thread_local_acc_out_data_y = 4,
  accelero_thread_local_acc_out_data_z = 5,
  magneto_thread_local_mag_in_data_x = 0,
  magneto_thread_local_mag_in_data_y = 1,
  magneto_thread_local_mag_in_data_z = 2,
  magneto_thread_local_mag_out_data_x = 3,
  magneto_thread_local_mag_out_data_y = 4,
  magneto_thread_local_mag_out_data_z = 5,
  gyro_thread_local_gyro_in_data_x = 0,
  gyro_thread_local_gyro_in_data_y = 1,
  gyro_thread_local_gyro_in_data_z = 2,
  gyro_thread_local_gyro_out_data_x = 3,
  gyro_thread_local_gyro_out_data_y = 4,
  gyro_thread_local_gyro_out_data_z = 5,
  attitude_calculation_thread_local_acc_in_data_x = 0,
  attitude_calculation_thread_local_acc_in_data_y = 1,
  attitude_calculation_thread_local_acc_in_data_z = 2,
  attitude_calculation_thread_local_mag_in_data_x = 3,
  attitude_calculation_thread_local_mag_in_data_y = 4,
  attitude_calculation_thread_local_mag_in_data_z = 5,
  attitude_calculation_thread_local_gyro_in_data_x = 6,
  attitude_calculation_thread_local_gyro_in_data_y = 7,
  attitude_calculation_thread_local_gyro_in_data_z = 8,
  invalid_local_port_t = -1
} __po_hi_local_port_t;

#define __PO_HI_NB_DEVICES 0

#define __PO_HI_NB_BUSES 2

#define __PO_HI_NB_PROTOCOLS 0

#define __PO_HI_PORT_TYPE_CONTENT __po_hi_accelero_thread_nb_ports, __po_hi_magneto_thread_nb_ports, __po_hi_gyro_thread_nb_ports, __po_hi_attitude_calculation_thread_nb_ports

#endif