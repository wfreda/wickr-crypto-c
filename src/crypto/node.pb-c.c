/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: node.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "node.pb-c.h"
void   wickr__proto__node__init
                     (Wickr__Proto__Node         *message)
{
  static Wickr__Proto__Node init_value = WICKR__PROTO__NODE__INIT;
  *message = init_value;
}
size_t wickr__proto__node__get_packed_size
                     (const Wickr__Proto__Node *message)
{
  assert(message->base.descriptor == &wickr__proto__node__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wickr__proto__node__pack
                     (const Wickr__Proto__Node *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wickr__proto__node__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wickr__proto__node__pack_to_buffer
                     (const Wickr__Proto__Node *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wickr__proto__node__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wickr__Proto__Node *
       wickr__proto__node__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wickr__Proto__Node *)
     protobuf_c_message_unpack (&wickr__proto__node__descriptor,
                                allocator, len, data);
}
void   wickr__proto__node__free_unpacked
                     (Wickr__Proto__Node *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &wickr__proto__node__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor wickr__proto__node__field_descriptors[3] =
{
  {
    "devid",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Node, has_devid),
    offsetof(Wickr__Proto__Node, devid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "id_chain",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Node, id_chain),
    &wickr__proto__identity_chain__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ephemeral_keypair",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Node, ephemeral_keypair),
    &wickr__proto__ephemeral_keypair__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__node__field_indices_by_name[] = {
  0,   /* field[0] = devid */
  2,   /* field[2] = ephemeral_keypair */
  1,   /* field[1] = id_chain */
};
static const ProtobufCIntRange wickr__proto__node__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor wickr__proto__node__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Node",
  "Node",
  "Wickr__Proto__Node",
  "wickr.proto",
  sizeof(Wickr__Proto__Node),
  3,
  wickr__proto__node__field_descriptors,
  wickr__proto__node__field_indices_by_name,
  1,  wickr__proto__node__number_ranges,
  (ProtobufCMessageInit) wickr__proto__node__init,
  NULL,NULL,NULL    /* reserved[123] */
};