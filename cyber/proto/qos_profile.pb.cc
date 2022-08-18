// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/qos_profile.proto

#include "cyber/proto/qos_profile.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace apollo {
namespace cyber {
namespace proto {
PROTOBUF_CONSTEXPR QosProfile::QosProfile(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.mps_)*/0u
  , /*decltype(_impl_.history_)*/1
  , /*decltype(_impl_.depth_)*/1u
  , /*decltype(_impl_.reliability_)*/1
  , /*decltype(_impl_.durability_)*/2} {}
struct QosProfileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QosProfileDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~QosProfileDefaultTypeInternal() {}
  union {
    QosProfile _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QosProfileDefaultTypeInternal _QosProfile_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_cyber_2fproto_2fqos_5fprofile_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto[3];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto = nullptr;

const uint32_t TableStruct_cyber_2fproto_2fqos_5fprofile_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_.history_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_.depth_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_.mps_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_.reliability_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::QosProfile, _impl_.durability_),
  1,
  2,
  0,
  3,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::apollo::cyber::proto::QosProfile)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::cyber::proto::_QosProfile_default_instance_._instance,
};

const char descriptor_table_protodef_cyber_2fproto_2fqos_5fprofile_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035cyber/proto/qos_profile.proto\022\022apollo."
  "cyber.proto\"\237\002\n\nQosProfile\022H\n\007history\030\001 "
  "\001(\0162$.apollo.cyber.proto.QosHistoryPolic"
  "y:\021HISTORY_KEEP_LAST\022\020\n\005depth\030\002 \001(\r:\0011\022\016"
  "\n\003mps\030\003 \001(\r:\0010\022S\n\013reliability\030\004 \001(\0162(.ap"
  "ollo.cyber.proto.QosReliabilityPolicy:\024R"
  "ELIABILITY_RELIABLE\022P\n\ndurability\030\005 \001(\0162"
  "\'.apollo.cyber.proto.QosDurabilityPolicy"
  ":\023DURABILITY_VOLATILE*[\n\020QosHistoryPolic"
  "y\022\032\n\026HISTORY_SYSTEM_DEFAULT\020\000\022\025\n\021HISTORY"
  "_KEEP_LAST\020\001\022\024\n\020HISTORY_KEEP_ALL\020\002*m\n\024Qo"
  "sReliabilityPolicy\022\036\n\032RELIABILITY_SYSTEM"
  "_DEFAULT\020\000\022\030\n\024RELIABILITY_RELIABLE\020\001\022\033\n\027"
  "RELIABILITY_BEST_EFFORT\020\002*m\n\023QosDurabili"
  "tyPolicy\022\035\n\031DURABILITY_SYSTEM_DEFAULT\020\000\022"
  "\036\n\032DURABILITY_TRANSIENT_LOCAL\020\001\022\027\n\023DURAB"
  "ILITY_VOLATILE\020\002"
  ;
static ::_pbi::once_flag descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto = {
    false, false, 656, descriptor_table_protodef_cyber_2fproto_2fqos_5fprofile_2eproto,
    "cyber/proto/qos_profile.proto",
    &descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_cyber_2fproto_2fqos_5fprofile_2eproto::offsets,
    file_level_metadata_cyber_2fproto_2fqos_5fprofile_2eproto, file_level_enum_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto,
    file_level_service_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto_getter() {
  return &descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cyber_2fproto_2fqos_5fprofile_2eproto(&descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto);
namespace apollo {
namespace cyber {
namespace proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosHistoryPolicy_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto[0];
}
bool QosHistoryPolicy_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosReliabilityPolicy_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto[1];
}
bool QosReliabilityPolicy_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* QosDurabilityPolicy_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2fqos_5fprofile_2eproto[2];
}
bool QosDurabilityPolicy_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class QosProfile::_Internal {
 public:
  using HasBits = decltype(std::declval<QosProfile>()._impl_._has_bits_);
  static void set_has_history(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_mps(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_reliability(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_durability(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

QosProfile::QosProfile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.cyber.proto.QosProfile)
}
QosProfile::QosProfile(const QosProfile& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  QosProfile* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.mps_){}
    , decltype(_impl_.history_){}
    , decltype(_impl_.depth_){}
    , decltype(_impl_.reliability_){}
    , decltype(_impl_.durability_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.mps_, &from._impl_.mps_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.durability_) -
    reinterpret_cast<char*>(&_impl_.mps_)) + sizeof(_impl_.durability_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.QosProfile)
}

inline void QosProfile::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.mps_){0u}
    , decltype(_impl_.history_){1}
    , decltype(_impl_.depth_){1u}
    , decltype(_impl_.reliability_){1}
    , decltype(_impl_.durability_){2}
  };
}

QosProfile::~QosProfile() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.QosProfile)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void QosProfile::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void QosProfile::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void QosProfile::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.QosProfile)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    _impl_.mps_ = 0u;
    _impl_.history_ = 1;
    _impl_.depth_ = 1u;
    _impl_.reliability_ = 1;
    _impl_.durability_ = 2;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* QosProfile::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::QosHistoryPolicy_IsValid(val))) {
            _internal_set_history(static_cast<::apollo::cyber::proto::QosHistoryPolicy>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional uint32 depth = 2 [default = 1];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_depth(&has_bits);
          _impl_.depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 mps = 3 [default = 0];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_mps(&has_bits);
          _impl_.mps_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::QosReliabilityPolicy_IsValid(val))) {
            _internal_set_reliability(static_cast<::apollo::cyber::proto::QosReliabilityPolicy>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::QosDurabilityPolicy_IsValid(val))) {
            _internal_set_durability(static_cast<::apollo::cyber::proto::QosDurabilityPolicy>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(5, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* QosProfile::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.QosProfile)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_history(), target);
  }

  // optional uint32 depth = 2 [default = 1];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_depth(), target);
  }

  // optional uint32 mps = 3 [default = 0];
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_mps(), target);
  }

  // optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_reliability(), target);
  }

  // optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_durability(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.QosProfile)
  return target;
}

size_t QosProfile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.QosProfile)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint32 mps = 3 [default = 0];
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_mps());
    }

    // optional .apollo.cyber.proto.QosHistoryPolicy history = 1 [default = HISTORY_KEEP_LAST];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_history());
    }

    // optional uint32 depth = 2 [default = 1];
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_depth());
    }

    // optional .apollo.cyber.proto.QosReliabilityPolicy reliability = 4 [default = RELIABILITY_RELIABLE];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_reliability());
    }

    // optional .apollo.cyber.proto.QosDurabilityPolicy durability = 5 [default = DURABILITY_VOLATILE];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_durability());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData QosProfile::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    QosProfile::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*QosProfile::GetClassData() const { return &_class_data_; }


void QosProfile::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<QosProfile*>(&to_msg);
  auto& from = static_cast<const QosProfile&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.QosProfile)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.mps_ = from._impl_.mps_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.history_ = from._impl_.history_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.depth_ = from._impl_.depth_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.reliability_ = from._impl_.reliability_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.durability_ = from._impl_.durability_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void QosProfile::CopyFrom(const QosProfile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.QosProfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QosProfile::IsInitialized() const {
  return true;
}

void QosProfile::InternalSwap(QosProfile* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.mps_, other->_impl_.mps_);
  swap(_impl_.history_, other->_impl_.history_);
  swap(_impl_.depth_, other->_impl_.depth_);
  swap(_impl_.reliability_, other->_impl_.reliability_);
  swap(_impl_.durability_, other->_impl_.durability_);
}

::PROTOBUF_NAMESPACE_ID::Metadata QosProfile::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto_getter, &descriptor_table_cyber_2fproto_2fqos_5fprofile_2eproto_once,
      file_level_metadata_cyber_2fproto_2fqos_5fprofile_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::QosProfile*
Arena::CreateMaybeMessage< ::apollo::cyber::proto::QosProfile >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::cyber::proto::QosProfile >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
