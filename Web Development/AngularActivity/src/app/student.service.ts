import { Injectable } from '@angular/core';
import { Studentstruct } from './studentstruct';
import { BehaviorSubject, Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class StudentService {
  //  protected studentList:Studentstruct[]=[];

  //  getStudentList():Studentstruct[]{
  //   return this.studentList;
  //  }

  // constructor() { }
  private studentData: BehaviorSubject<Studentstruct[]> = new BehaviorSubject<Studentstruct[]>([]);
  public dataEntries$: Observable<Studentstruct[]> = this.studentData.asObservable();

  constructor() { }

  addDataEntry(entry: Studentstruct): void {
    const currentEntries = this.studentData.getValue();
    const updatedEntries = [...currentEntries, entry];
    this.studentData.next(updatedEntries);
  }
}
