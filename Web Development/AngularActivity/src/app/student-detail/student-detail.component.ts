import { Component, OnInit, inject} from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormBuilder, FormGroup, ReactiveFormsModule, Validators } from '@angular/forms';
import { Studentstruct } from '../studentstruct';
import { StudentService } from '../student.service';
import { RouterLink } from '@angular/router';




@Component({
  selector: 'app-student-details',
  standalone: true,
  imports: [CommonModule,ReactiveFormsModule,RouterLink],
  templateUrl: './student-details.component.html',
  styleUrl: './student-details.component.css'
})
// export class StudentDetailsComponent implements OnDestroy {
export class StudentDetailsComponent implements OnInit {
  studentList:Studentstruct[]=[];
  constructor(private studentservice:StudentService){ }
    ngOnInit():void{
      this.studentservice.dataEntries$.subscribe(entries=>{
        this.studentList=entries;
      });
    }

  //  studentList:Studentstruct[]=[];
  // @Input() studentList!:Studentstruct;
  // studentService:StudentService=inject(StudentService);
  // constructor(){
  //   this.studentList=this.studentService.getStudentList();
  // }

  // studentForm:any| FormGroup;
  // studentList: any[] = [];
  // selectedStudent: any;


  // constructor(private formBuilder: FormBuilder) {}

  // ngOnInit(): void {
  //   this.studentForm = this.formBuilder.group({
  //     Sname: ['', [Validators.required, Validators.minLength(5)]],
  //     Sroll: ['', [Validators.required]],
  //     Sclass:['', [Validators.required]]
  //   });
  // }

  // submitForm(): void {
  //   if (this.studentForm.valid) {
  //      this.studentList.push(this.studentForm.value);
  //     this.studentForm.reset();
  //   }
  // }


  // openModal(item: any): void {
  //   this.selectedStudent = { ...item }; // Make a copy of the item to avoid directly modifying the original data
  //   this.modalService.open(ModalComponent, { size: 'lg' });
  // }

  // openModal(index:number){
  //     const item = this.studentList[index];
  //     this.studentForm.patchValue(item);
  //   }

  // `updateStudent(updateStudent: any): void {
  //     const index = this.studentList.findIndex(item => item.Sname === updatedItem.Sname);
  //     if (index !== -1) {
  //       this.studentList[index] = updateStudent;
  //     }
  //   }`

  // deleteStudent(index: number): void {
  //   this.studentList.splice(index, 1);
  // }

  // updateStudent(index:number){
  //   const item = this.studentList[index];
  //      this.studentForm.patchValue(item);

  // }

  // studentList: any[] = [];
   
  

  // constructor(private studentService: StudentServiceService) {}
    
  // getFormData(): void {
  // this.studentList = this.studentService.getFormData();
  // }
  
  // ngOnInit(): void {
  //   this.getFormData();
  // }

  // private formsubscription: Subscription;

  // constructor(private studentService: StudentServiceService) {
  //   this.formsubscription = this.studentService.getFormData().subscribe(FormData => {
  //     this.studentList = FormData;
  //   });
  // }

  // ngOnDestroy() {
  //   this.formsubscription.unsubscribe();
  // }

  
}

