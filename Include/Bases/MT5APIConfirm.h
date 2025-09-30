//+------------------------------------------------------------------+
//|                                                 MetaTrader 5 API |
//|                             Copyright 2000-2025, MetaQuotes Ltd. |
//|                                               www.metaquotes.net |
//+------------------------------------------------------------------+
#pragma once
//+------------------------------------------------------------------+
//| Trade request confim interface                                   |
//+------------------------------------------------------------------+
class IMTConfirm
  {
public:
   //--- confirm flags
   enum EnConfirmFlags
     {
      CONFIRM_FLAG_NONE=0,          // none
      CONFIRM_FLAG_TICK=1,          // add quoted price into MT5 price stream
      //--- enumeration borders
      CONFIRM_FLAG_ALL =CONFIRM_FLAG_TICK
     };
   //--- common methods
   virtual void      Release(void)=0;
   virtual MTAPIRES  Assign(const IMTConfirm* confirm)=0;
   virtual MTAPIRES  Clear(void)=0;
   virtual LPCWSTR   Print(MTAPISTR& string) const=0;
   //--- request id
   virtual uint32_t  ID(void) const=0;
   virtual MTAPIRES  ID(const uint32_t id)=0;
   //--- confirmation retcode
   virtual MTAPIRES  Retcode(void) const=0;
   virtual MTAPIRES  Retcode(const MTAPIRES retcode)=0;
   //--- confirmed volume
   virtual uint64_t    Volume(void) const=0;
   virtual MTAPIRES  Volume(const uint64_t volume)=0;
   //--- confirmed price
   virtual double    Price(void) const=0;
   virtual MTAPIRES  Price(const double price)=0;
   //--- confirmed tick bid
   virtual double    TickBid(void) const=0;
   virtual MTAPIRES  TickBid(const double tickbid)=0;
   //--- confirmed tick ask
   virtual double    TickAsk(void) const=0;
   virtual MTAPIRES  TickAsk(const double tickask)=0;
   //--- confirmed tick last
   virtual double    TickLast(void) const=0;
   virtual MTAPIRES  TickLast(const double ticklast)=0;
   //--- confirmation comment
   virtual LPCWSTR   Comment(void) const=0;
   virtual MTAPIRES  Comment(LPCWSTR comment)=0;
   //--- flags
   virtual uint32_t  Flags(void) const=0;
   virtual MTAPIRES  Flags(const uint32_t flags)=0;
   //--- linked deal id in external system
   virtual LPCWSTR   DealID(void) const=0;
   virtual MTAPIRES  DealID(LPCWSTR deal_id)=0;
   //--- linked order id in external system
   virtual LPCWSTR   OrderID(void) const=0;
   virtual MTAPIRES  OrderID(LPCWSTR order_id)=0;
   //--- execution price on gateway
   virtual double    PriceGateway(void) const=0;
   virtual MTAPIRES  PriceGateway(const double price)=0;
   //--- linked  position ticket in external system
   virtual LPCWSTR   PositionExternalID(void) const=0;
   virtual MTAPIRES  PositionExternalID(LPCWSTR id)=0;
   //--- external trade system return code
   virtual int32_t   ExternalRetcode(void) const=0;
   virtual MTAPIRES  ExternalRetcode(const int32_t retcode)=0;
   //--- confirmed volume with extended accuracy
   virtual uint64_t  VolumeExt(void) const=0;
   virtual MTAPIRES  VolumeExt(const uint64_t volume)=0;
   //--- confirmed gateway volume with extended accuracy
   virtual uint64_t  VolumeGatewayExt(void) const=0;
   virtual MTAPIRES  VolumeGatewayExt(const uint64_t volume)=0;
   //--- confirmed gateway deal type
   virtual uint32_t  ActionGateway(void) const=0;
   virtual MTAPIRES  ActionGateway(const uint32_t action)=0;
   //--- explicit destructor is prohibited
protected:
                    ~IMTConfirm(void) {}
  };
//+------------------------------------------------------------------+
