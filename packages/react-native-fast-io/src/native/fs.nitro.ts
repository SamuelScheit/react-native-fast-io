import { HybridObject, NitroModules } from 'react-native-nitro-modules'

export type Metadata = {
  name: string
  path: string
  root: string
  size: number
  type: string
  lastModified: number
}

type WellKnownDirectory = 'desktop' | 'documents' | 'downloads' | 'music' | 'pictures' | 'videos'

export type NativeFilePickerOptions = {
  multiple?: boolean
  startIn?: string

  extensions?: string[]
  mimeTypes?: string[]
}

interface FileSystem extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  getMetadata(path: string): Metadata
  getWellKnownDirectoryPath(directory: WellKnownDirectory): string

  showOpenFilePicker(options?: NativeFilePickerOptions): Promise<string[]>
}

export const FileSystem = NitroModules.createHybridObject<FileSystem>('FileSystem')
