#pragma once

#include <stdint.h>

// integer types
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

// unsigned types
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

// float types
using f32 = float;
using f64 = double;

union v2
{
  struct
  {
    f32 x, y;
  };
  struct
  {
    f32 u, v;
  };
  struct
  {
    f32 Width, Height;
  };
  f32 E[2];
};

union v2u
{
  struct
  {
    u32 x, y;
  };
  struct
  {
    u32 Width, Height;
  };
  u32 E[2];
};

union v3
{
  struct
  {
    f32 x, y, z;
  };
  struct
  {
    f32 u, v, __;
  };
  struct
  {
    f32 r, g, b;
  };
  struct
  {
    v2 xy;
    f32 Ignored0_;
  };
  struct
  {
    f32 Ignored1_;
    v2 yz;
  };
  struct
  {
    v2 uv;
    f32 Ignored2_;
  };
  struct
  {
    f32 Ignored3_;
    v2 v__;
  };
  f32 E[3];
};

union v4
{
  struct
  {
    union
    {
      v3 xyz;
      struct
      {
        f32 x, y, z;
      };
    };

    f32 w;
  };
  struct
  {
    union
    {
      v3 rgb;
      struct
      {
        f32 r, g, b;
      };
    };

    f32 a;
  };
  struct
  {
    v2 xy;
    f32 Ignored0_;
    f32 Ignored1_;
  };
  struct
  {
    f32 Ignored2_;
    v2 yz;
    f32 Ignored3_;
  };
  struct
  {
    f32 Ignored4_;
    f32 Ignored5_;
    v2 zw;
  };
  f32 E[4];
};