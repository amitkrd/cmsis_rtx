/* -----------------------------------------------------------------------------
 * Copyright (C) 2013 ARM Limited. All rights reserved.
 *  
 * $Date:        06. February 2014
 * $Revision:    V1.00
 *  
 * Project:      RTE Device Configuration for NXP LPC15xx
 * -------------------------------------------------------------------------- */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H


// <e> USB Controller
#define RTE_USB_USB0                   1

//   <e> Pin Configuration
#define RTE_USB_USB_PIN                1
//     <e> USB_VBUS
//     <i> USB VBUS signal
//     <i> USB VBUS function assignment
//     <i> PINx_y
//       <o1> Pin  <0=>P0_16 <1=>P1_11 <2=>P2_4
//     </e>
#define RTE_USB_VBUS_PIN               1
#define RTE_USB_VBUS_ID                2
#if (RTE_USB_VBUS_ID == 0)
  #define RTE_USB_VBUS_PORT            0
  #define RTE_USB_VBUS_BIT             16
#elif (RTE_USB_VBUS_ID == 1)
  #define RTE_USB_VBUS_PORT            1
  #define RTE_USB_VBUS_BIT             11
#elif (RTE_USB_VBUS_ID == 2)
  #define RTE_USB_VBUS_PORT            2
  #define RTE_USB_VBUS_BIT             4
#else
  #error "Invalid RTE_USB_VBUS Pin Configuration!"
#endif
//   </e>
//   <e> Device [Driver_USBD0]
//   <i> Configuration settings for Driver_USBD0 in component ::Drivers:USB Device
#define RTE_USB_USB0_DEV                1
//     <h> Endpoints
//     <i> Reduce memory requirements of Driver by disabling unused endpoints
//       <e0.1> Endpoint 1
//         <o1.1>  Bulk OUT
//         <o1.17> Bulk IN
//         <o2.1>  Interrupt OUT
//         <o2.17> Interrupt IN
//         <o3.1>  Isochronous OUT
//         <o3.17> Isochronous IN
//       </e>
//       <e0.2> Endpoint 2
//         <o1.2>  Bulk OUT
//         <o1.18> Bulk IN
//         <o2.2>  Interrupt OUT
//         <o2.18> Interrupt IN
//         <o3.2>  Isochronous OUT
//         <o3.18> Isochronous IN
//       </e>
//       <e0.3> Endpoint 3
//         <o1.3>  Bulk OUT
//         <o1.19> Bulk IN
//         <o2.3>  Interrupt OUT
//         <o2.19> Interrupt IN
//         <o3.3>  Isochronous OUT
//         <o3.19> Isochronous IN
//       </e>
//       <e0.4> Endpoint 4
//         <o1.4>  Bulk OUT
//         <o1.20> Bulk IN
//         <o2.4>  Interrupt OUT
//         <o2.20> Interrupt IN
//         <o3.4>  Isochronous OUT
//         <o3.20> Isochronous IN
//       </e>
//     </h>
#define RTE_USB_USB0_DEV_EP             0x0000001E
#define RTE_USB_USB0_DEV_EP_BULK        0x001E001E
#define RTE_USB_USB0_DEV_EP_INT         0x001E001E
#define RTE_USB_USB0_DEV_EP_ISO         0x001E001E

//   </e>
// </e>


#endif  /* __RTE_DEVICE_H */
