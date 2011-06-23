/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

/// Factory where displayable manager classe should be registered with
/// 
/// A displayable manager class is responsible to represente a 
/// MRMLDisplayable node in a renderer.
/// 

#ifndef __vtkMRMLThreeDViewDisplayableManagerFactory_h
#define __vtkMRMLThreeDViewDisplayableManagerFactory_h

// MRMLDisplayableManager includes
#include "vtkMRMLDisplayableManagerFactory.h"

// VTK includes
#include <vtkSingleton.h>

#include "vtkMRMLDisplayableManagerWin32Header.h"

class vtkRenderer;

class VTK_MRML_DISPLAYABLEMANAGER_EXPORT vtkMRMLThreeDViewDisplayableManagerFactory
  : public vtkMRMLDisplayableManagerFactory
{
public:

  vtkTypeRevisionMacro(vtkMRMLThreeDViewDisplayableManagerFactory,
                       vtkMRMLDisplayableManagerFactory);
  void PrintSelf(ostream& os, vtkIndent indent);

  ///
  /// This is a singleton pattern New.  There will only be ONE
  /// reference to a vtkMRMLThreeDViewDisplayableManagerFactory object per process. Clients that
  /// call this must call Delete on the object so that the reference counting will work.
  /// The single instance will be unreferenced when the program exits.
  static vtkMRMLThreeDViewDisplayableManagerFactory *New();

  ///
  /// Return the singleton instance with no reference counting.
  static vtkMRMLThreeDViewDisplayableManagerFactory* GetInstance();

protected:

  vtkMRMLThreeDViewDisplayableManagerFactory();
  virtual ~vtkMRMLThreeDViewDisplayableManagerFactory();

  //BTX
  VTK_SINGLETON_DECLARE(vtkMRMLThreeDViewDisplayableManagerFactory);
  //ETX

private:

  vtkMRMLThreeDViewDisplayableManagerFactory(const vtkMRMLThreeDViewDisplayableManagerFactory&);
  void operator=(const vtkMRMLThreeDViewDisplayableManagerFactory&);

};

//BTX
VTK_SINGLETON_DECLARE_INITIALIZER(VTK_MRML_DISPLAYABLEMANAGER_EXPORT,
                                  vtkMRMLThreeDViewDisplayableManagerFactory);
//ETX

#endif


