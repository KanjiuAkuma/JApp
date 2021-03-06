﻿#pragma once

namespace JApp { namespace Renderer {

	class VertexBuffer {
	private:
		unsigned int m_RendererID;
	public:
		VertexBuffer(const void* data, unsigned int size);
		~VertexBuffer();

		void bind() const;
		void unbind() const;
	};

}}
